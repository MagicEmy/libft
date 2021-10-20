/*
#include <string.h>
#include <stdio.h>
*/
#include "libft.h"
/*
void    *ft_memmove(void *dst, const void *src, size_t len);

int main(void)
{
    const char src[25] = "Don't Panic";
    const char src2[25] = "Don't Panic";
    char dst[50];
    char dst2[50];
    //size_t len;

    //len = strlen(src);
    ft_memmove(src + 2, src, 5);
    memmove(src2 + 2, src2, 5);
    printf("%s", src);
    printf("%s", src2);
    return (0);
}
*/
void    *ft_memmove(void *dst, const void *src, size_t len)
{
    const char *s;  
    char *d;
    const char *temp_src;
    char *temp_dst;
    size_t max;

    s = (char *)src;
    d = (char *)dst;
    max = len;
    if (d < s)
    {
        while (max--)
        {
            *(d++) = *(s++);
        }
    }
    else
    {
        temp_src = s + (len -1);
        temp_dst = d + (len -1);
        while (max--)
        {
            *(temp_dst--) = *(temp_src--);
        }
    }
    dst = temp_dst;
    return (dst);
}