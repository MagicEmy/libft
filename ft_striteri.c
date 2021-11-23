#include "libft.h"
/*
void	ft_striteri(char *s, void (*f)(unsigned int, char*));

int		main(void)
{
	ft_striteri(s, f(ui, s[ui]));??
	return (0);
}
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{	
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}
