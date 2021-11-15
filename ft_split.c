/*
char **ft_split(char const *s, char c);
Parameters
#1. The string to be split.
#2. The delimiter character.
Return value The array of new strings resulting from the split. NULL if the allocation fails. 
External functs: malloc, free
Allocates and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must be
ended by a NULL pointer.
*/
#include "libft.h"

//char **ft_split(char const *s, char c);

int main(void)
{
    char c;
    char const  *s;
    size_t      len;      

    c = '-';
    len = ft_strlen(s);
    s = "Ma-che-bel-castello-marcondiro-ndiro-ndello";
    

    return (0);
}