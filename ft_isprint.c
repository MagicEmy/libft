#include "libft.h"
/*
#include <stdio.h>
#include <ctype.h>
int ft_isprint(int c);

int main(void)
{
	unsigned char print;
		
	print = '\n';
	printf ("%d", ft_isprint(print));
	printf ("%d", isprint(print));
	return (0);
}
*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
