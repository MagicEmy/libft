/*
#include <string.h>
#include <stdio.h>
*/
#include "libft.h"
int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int	main(void)
{
	int				result;
	char			*first;
	char			*second;
	unsigned int	n;

	n = 4;
	first = "\200";
	second = "HaryKrish";
	result = ft_strncmp(first, second, n);
	printf("%d", result);
	result = strncmp(first, second, n);
    printf("%d", result);
	return (0);
}
*/