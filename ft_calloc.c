/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
*/
#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc (size * count);
	if (dest == NULL)
		return (NULL);
	while (dest[i])
	{
		dest[i] = 0;
		i++;	
	}
	return (dest);
}