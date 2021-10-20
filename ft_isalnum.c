
#include "libft.h"
/*
#include <stdio.h>
#include <ctype.h>
int ft_isalnum(int c);

int main(void)
{
    char digit;
    
    digit = '5';
    printf ("%d", ft_isalnum(digit));
    printf ("%d", isalnum(digit));
    return (0);
}
*/

int ft_isalnum(int c)
{
    if ((c >= '0' && c <= '9') \
    || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        return (1);
    else
        return (0);
}   
