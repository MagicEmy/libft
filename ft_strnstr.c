/*
#include <stdio.h>
#include <string.h>

char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
*/
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int		i;
	size_t	j;
	char	*ocean;
	char	*drop;

	i = 0;
	ocean = (char *) haystack;
	drop = (char *) needle;
	if (*needle == '\0')
		return ((char *)haystack);
	while (ocean[i] != '\0' && (size_t)i < len)
	{
		j = 0;
		while (ocean[i + j] == drop[j] && i + j < len)
		{
			j++;
			if (drop[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char    str[15] = "is";
	char    dest[50] = "";
	char	*letter;

	letter = ft_strnstr(dest, str, 0);
	printf("%s", letter);
    return (0);
}
*/