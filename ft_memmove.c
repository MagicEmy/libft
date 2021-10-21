/*
#include <string.h>
#include <stdio.h>
*/
#include "libft.h"
/*
void    *ft_memmove(void *dst, const void *src, size_t len);

int main(void)
{
    char src[25] = "Don't Panic";
    char src2[25] = "Don't Panic";
    char dst[30];
    char dst2[30];
    
    ft_memmove(dst, src, 5);
    memmove(dst2, src2, 5);
    printf("ft_memmove %s.\n", dst);
    printf("memmove %s.", dst2);
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
    if (!s || !d)
        return (NULL);
    if (d < s)
    {
        while (max)
        {
            *(d++) = *(s++);
            max--;
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
    return (dst);
}