#include "libft.h"
/*
#include <string.h>
#include <stdio.h>
size_t  ft_strlen(const char *s);

int main(void)
{
    const char *s;
    
    s = "Galaxy";
    printf ("%lu", ft_strlen(s));
    printf ("%lu", strlen(s));
    return (0);
}
*/
size_t  ft_strlen(const char *s)
{
    size_t len;

    len = 0;
    while (s[len] != '\0')
    {
        len++;
    }
    return (len);
}