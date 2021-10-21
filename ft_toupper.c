#include "libft.h"
/*
#include <stdio.h>
#include <ctype.h>

int ft_toupper(int c);

int main(void)
{
    int letter_u;
    
    letter_u = 'e';
    printf ("ft_toupper %c\t", ft_toupper(letter_u));
    printf ("toupper %c\n", toupper(letter_u));
    return (0);
}
*/
int ft_toupper(int c)
{
    int upper;

    if (c >= 'a' && c <= 'z')
    {
        upper = c - 32;
        return (upper); 
    } 
    else
        return (c);
}