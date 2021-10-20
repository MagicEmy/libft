#include <stdio.h>
#include <ctype.h>
int ft_isascii(int c);

int main(void)
{
    unsigned char ascii;
    
    ascii = 220;
    printf ("%d", ft_isascii(ascii));
    printf ("%d", isascii(ascii));
    return (0);
}

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return (1);
    else
        return (0);
}   
