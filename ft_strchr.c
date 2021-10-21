/*
DESCRIPTION
The strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.
The terminat-ing null character is considered to be part of the string; therefore if c is `\0', 
the functions locate the terminating '\0'.
The functions strchr() and strrchr() return a pointer to the located character, or NULL if the char
does not appear in the string.

#include <string.h>
#include <stdio.h>
*/
#include "libft.h"
/*
char    *ft_strchr(const char *s, int c);

int     main(void)
{
    int c;
    const char *s;

    c = 'u';
    s = "Bibuba";
    printf("%s\n", ft_strchr(s, c));
    printf("%s", strchr(s, c));
    return (0);
}
*/
char    *ft_strchr(const char *s, int c)
{
    int     i;
    char    *string;

    i = 0;
    string = (char *)s;
    while (string[i++])
    {
        if (string[i] == c)
        {
            return (string + i);
        }
    }
    return (NULL);
}
