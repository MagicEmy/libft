
#include <string.h>
#include <stdio.h>

void    *ft_memmove(void *dst, const void *src, size_t len);

int main(void)
{
    const char src[25] = "Don't Panic";
    const char src2[25] = "Don't Panic";
    char dst[50];
    char dst2[50];
  
    ft_memmove((void *)src + 2, src, 5);
    memmove((void *)src2 + 2, src2, 5);
    printf("%s", src);
    printf("%s", src2);
    return (0);
}

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    const char *s;  
    char *d;
    const char *temp_src;
    char *temp_dst;
    size_t max;

    s = (const char *)src;
    d = (char *)dst;
    max = len;
    if (!s || !d)
        return (NULL);
    printf("test1\n");
    if (d < s)
    {
        while (max--)
        {
            *(d++) = *(s++);
        }

    }

    // printf("test2\n");
    // if (d > s)
    // {
    //     s = s + (len -1);
    //     d = d + (len -1);
    //     while (max--)
    //     {
    //         *(d--) = *(s--);
    //     }
    // }
    printf("test3\n");
    return (d);
}