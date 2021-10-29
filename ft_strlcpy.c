/*
#include <string.h>
#include <stdio.h>
*/
#include "libft.h"
/*
size_t  ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

int main(void)
{
    char dst[8] = {0, 0, 0, 0, 0};
    const char src[25] = "Party-time";
    size_t len;
    size_t dstsize;

    len = 0;
    dstsize = sizeof(dst);
    printf("%s \t %lu", dst, ft_strlcpy(dst, src, 0));
    return (0);
}
*/
size_t  ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
    
    char *d = dst;
    const char *s = src;
    size_t len;
    
    len = ft_strlen(s);
    /*
    len = 0;
    while (s[len])
    {
        len++;        
    }
    */
    if (len + 1 < dstsize)
    {
        ft_memcpy(dst, src, len + 1);
    }
    else if (dstsize != 0)
    {
        ft_memcpy(dst, src, dstsize - 1);
        d[dstsize - 1] = '\0';
    }
    return (len);
}
/*
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
    const char *s;
    char *d;

    s = src;
    d = dst;
    while (n--)
    {
        *d++ = *s++;
    }
    return (dst);
}
*/