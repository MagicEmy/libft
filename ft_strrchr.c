
//#include <string.h>

#include <stdio.h>

#include "libft.h"
/*
char *ft_strrchr(const char *s, int c);

int     main(void)
{
    int c;
    const char *s_revchr;

    c = 'u';
    s_revchr = "Bibuba";
    printf("%s\n", ft_strrchr(s_revchr, c));
    printf("%s", strrchr(s_revchr, c));
    return (0);
}
*/

char *ft_strrchr(const char *s, int c)
{
    size_t len;
    char *temp;

    temp = NULL;
    len = ft_strlen(s);
//  printf("test");
    if (c == '\0')
        return ((char *)s + len);
    while (*s != '\0')
    {
        if ((unsigned char)(*s) == (unsigned char) c)
        {
            temp = (char *) s;
        }
        s++;
    }
    return (temp);
}