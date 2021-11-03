/*
#1. The string from which to create the substring. 
#2. The start index of the substring in the string ’s’.
#3. The maximum length of the substring.

Return value The substring. NULL if the allocation fails.

Allocates (with malloc(3)) and returns a substring from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.
*/
#include "libft.h"
char    *ft_substr(char const *s, unsigned int start, size_t len);

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char            *string;
    unsigned int    i;
    size_t          j;
    size_t          s_len;
    
    i = start;
    j = 0;
    s_len = ft_strlen(s);
    if (!s)
        return (NULL);
    if (s_len < start)
        return (strdup(""));
    string = (char *)malloc(sizeof (char) * (len + 1));
    if (!string)
        return (NULL);
    while (s[i] && j < len)
    {
        string[j] = s[i];
        i++;
        j++;
    }
    string[j] = '\0';
    return (string);
}