#include "libft.h"
/*
int main(void)
{
	char digit;
    
    digit = '5';
    printf ("%d", ft_isdigit(digit));
    printf ("%d", isdigit(digit));
    return (0);
}
*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
