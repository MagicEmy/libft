/*
#include <string.h>
#include <stdio.h>
*/
#include "libft.h"
/*
char    *ft_strchr(const char *s, int c);

int     main(void)
{
    int c;
    const char *s;

    c = 'u';
    s = "Bibuba";
    printf("%s\n", ft_strchr(s, c));
    printf("%s", strchr(s, c));
    return (0);
}
*/

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*string;

	i = 0;
	string = (char *)s;
	while (string[i])
	{
		if (string[i] == c)
		{
			return (string + i);
		}
		i++;
	}
	if (c == '\0')
		return (string + i);
	return (NULL);
}
