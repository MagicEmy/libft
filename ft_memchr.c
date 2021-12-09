#include "libft.h"
/*
void	*ft_memchr(const void *s, int c, size_t n);

int	main(void)
{
	int			c;
	size_t		n;
	const char	*s;
	char		*new;

	c = 'p';
	s = "Don'T panic";
	n = ft_strlen(s);
	new = ft_memchr(s, c, n);
	printf ("%s", new);
	system ("leaks a.out");
	return (0);
}
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n)
	{
		if (*ptr == (unsigned char)c)
		{
			return (ptr);
		}
		n--;
		ptr++;
	}
	ptr = NULL;
	return (ptr);
}
