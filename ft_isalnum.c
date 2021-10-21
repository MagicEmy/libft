#include "libft.h"
/*
#include <stdio.h>
int ft_isalnum(int c);

int main(void)
{
    char digit;
    
    digit = 'e';
    printf ("%d", ft_isalnum(digit));
    printf ("%d", isalnum(digit));
    return (0);
}
*/
int ft_isalnum(int c)
{
    if ((ft_isalpha(c)) || (ft_isdigit(c)))
        return (1);
    else
        return (0);
}   
