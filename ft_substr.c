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
    char *string;
    //unsigned int like_start;
    size_t  like_len;

    like_len = len;
    string = (char *) malloc (sizeof(char) * (len + 1));
    if (string == NULL)
        return (NULL);
    while (like_len)
    {
        *string = *(s + start);
        string++;
        len--;
    }
    return (string);
}