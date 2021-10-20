/* DESCRIPTION The bzero() function writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.*/
#include "libft.h"
/*
#include <string.h>
#include <stdio.h>
void    ft_bzero(void *s, size_t n);

int main(void)
{
    char s[20] = "Codam";
    char w[20] = "Codam";
    size_t n;
    
    n = 2;
    ft_bzero(s, n);
    printf("%s \n", s);
    bzero(w, n);
    printf("%s \n", w);   
    return (0);
}
*/
void    ft_bzero(void *s, size_t n)
{
    if (n > 0)
    {
        while (n-- > 0)
        {
            *(unsigned char *)s++ = 0;
        }
    }
}