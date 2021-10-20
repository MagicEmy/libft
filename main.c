#include "libft.h"

int main(void)
{
    char digit;
    int alpha;
    size_t num;
    unsigned char ascii;
    unsigned char print;
    char s[20] = "Codam";
    char w[20] = "Codam";
    const char src_mm[25] = "Don't Panic dude";
    const char src2_mm[25] = "Don't Panic";
    char dst_mm[50];
    char dst2_mm[50];
    const char *str;
    int letter_u;
    int letter_l;
    char src[20] = "Codam";
    char dst[50];
    size_t n;
    char dest[8] = {0, 0, 0, 0, 0};
    const char sorc[25] = "Party-time";
    size_t len;
    size_t dstsize;
    

    num = 2;
    digit = '5';
    alpha = 'e';
    ascii = 127;
    print = 'r';
    str = "Galaxy";
    letter_u = 'e';
    letter_l = 'E';
    n = sizeof(src);
    len = 0;
    dstsize = sizeof(dest);
    printf ("ft_isalpha %d\t", ft_isalpha(alpha));
    printf ("isalpha %d\n", isalpha(alpha));
    printf ("ft_isdigit %d\t", ft_isdigit(digit));
    printf ("isdigit %d\n", isdigit(digit));
    printf ("ft_isalnum %d\t", ft_isalnum(digit));
    printf ("isalnum %d\n", isalnum(digit));
    printf ("ft_isascii %d\t", ft_isascii(ascii));
    printf ("isascii %d\n", isascii(ascii));
    printf ("ft_isprint %d\t", ft_isprint(print));
    printf ("isprint %d\n", isprint(print));
    printf ("ft_strlen  %lu\t", ft_strlen(str));
    printf ("strlen %lu \n", strlen(str));
    printf("ft_bzero string %s \t", s);
    ft_bzero(s, num);
    printf("ft_bzero %s \n", s);
    printf("bzero string\t%s \t", w);
    bzero(w, num);
    printf("bzero %s \n", w);
    printf ("ft_toupper %c\t", ft_toupper(letter_u));
    printf ("toupper %c\n", toupper(letter_u));
    printf ("ft_tolower %c\t", ft_tolower(letter_l));
    printf ("tolower %c\n", tolower(letter_l));
    printf ("ft_memcpy %s \n%s\n", src, ft_memcpy(dst, src, n));
    printf ("memcpy %s \n%s\n", src, memcpy(dst, src, n));
    printf("ft_memmove %s", ft_memmove(src_mm + 2, src_mm, 5));
    printf("memmove %s", memmove(src2_mm + 2, src2_mm, 5));
    printf("ft_strlcpy  %s \t %lu", dest, ft_strlcpy(dest, sorc, dstsize));
    return (0);
}
