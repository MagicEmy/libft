/*
#1. The string to be trimmed.
#2. The reference set of characters to trim.
Return value The trimmed string. NULL if the allocation fails.
Description Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
*/

#include "libft.h"
char    *ft_strtrim(char const *s1, char const *set)
{
    size_t front;
    size_t back;
    char *set;
    char *string;
    int index;
    int i;

    i = 0;
    index = 0;
    front = 0;
    set = "abc";
    string = "abbrutteaab";
    back = ft_strlen(s1);
    while (string[index])
    {
        while(set[i])
        {
            if (!ft_strchr(&string[front], &set[i]))
            {
                front++;
            }
            i++;            
        }
    }
    printf("%s", string[front]);
}