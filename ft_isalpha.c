#include <stdio.h>
#include <ctype.h>
#include "libft.h"
int	ft_isalpha(int c);
/*
int main(void)
{
    int alpha;
    
    alpha = 'e';
    printf ("%d", ft_isalpha(alpha));
    printf ("%d", isalpha(alpha));
    return (0);
}
*/

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}	
