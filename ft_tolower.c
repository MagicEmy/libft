#include "libft.h"
/*
#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c);

int main(void)
{
    int letter_l;
    
    letter_l = 'e';
    printf ("ft_tolower %c\t", ft_tolower(letter_l));
    printf ("tolower %c\n", tolower(letter_l));
    return (0);
}
*/

int	ft_tolower(int c)
{
	int	lower;

	if (c >= 'A' && c <= 'Z')
	{
		lower = c + 32;
		return (lower);
	}
	else
		return (c);
}
