/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
*/
#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
	char	*dest;
	size_t	tot_size;
	size_t	i;

	i = 0;
	tot_size = size * count;
	dest = malloc (tot_size);
	if (dest == NULL)
		return (NULL);
	while (i < tot_size)
	{
		dest[i] = 0;
		i++;	
	}
	return (dest);
}