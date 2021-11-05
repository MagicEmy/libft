/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
char	*ft_strdup(char *src);
*/
#include "libft.h"

char    *ft_strdup(const char *s1)
{
	int		len;
	int		i;
	char	*dest;

	len = 0;
	while (s1[len])
		len++;
	dest = (char *) malloc (sizeof(char) * (len + 1));
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main(void)
{
	char	*src;
	char	*dest;
	char	*redest;

	src = "The Empire strikes back";
	dest = ft_strdup(src);
	printf("%s", dest);
	redest = strdup(src);
	printf("%s", redest);
	return (0);
}
*/