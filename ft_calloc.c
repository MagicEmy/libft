/*
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
*/
#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
	char	*dest;

	dest = (char *) malloc (sizeof(size) * count);
	if (dest == NULL)
		return (NULL);
	memset(dest, 0, count);
	return (dest);
}