#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
/*
int	main(void)
{
	char	*s;

	s = "iteration";
	ft_strmapi(s, (*f)(unsigned int, char));
	return (0);
}
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_string;
	size_t			len;

	i = 0;
	if (!s)
		return (NULL);
	len = ft_strlen(s);
	new_string = (char *) malloc(sizeof(char) * len + 1);
	if (!new_string)
		return (NULL);
	while (s[i])
	{
		new_string[i] = f(i, s[i]);
		i++;
	}
	new_string[i] = '\0';
	return (new_string);
}
