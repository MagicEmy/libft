/*The memcpy() function copies n bytes from memory area src to memory area dst.  If dst and src overlap, behavior is undefined.
The memcpy() function returns the original value of dst.       */

#include <string.h>
#include <stdio.h>
void    *ft_memcpy(void *restrict dst, const void *restrict src, size_t n);

int main(void)
{
    char src[20] = "Codam";
    char dst[50];
    size_t n;

    n = sizeof(src);
    printf ("%s \n%s", src, ft_memcpy(dst, src, n));
    return (0);
}

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
