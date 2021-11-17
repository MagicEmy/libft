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

char    **ft_split(char const *s, char c);
size_t  ft_sep_count(char const *s, char c);
size_t  ft_string_len(char const *entire_string, char c);
void    ft_alloc_copy(char const *s, char c, char **split);
/*
int main(void)
{
    char        c;
    char const  *s;
    char        **ptr;
      
    c = '-';
    s = "";
    printf("%lu\n", ft_sep_count(s, c));
    ptr = ft_split(s, c);
    printf("%s", ptr[0]);
    return (0);
}
*/
char **ft_split(char const *s, char c)
{
    char    **split;
    size_t  sep;
    //size_t  letters;

    if (!s)
        return (NULL);
    sep = ft_sep_count(s,c);
    //letters = ft_string_len(s, c);
    printf("%lu", sep);
    split = (char **)ft_calloc((sep + 1), (sizeof(char *)));
    if (!split)
        return (NULL);
    ft_alloc_copy(s, c, split);
    
    return(split);
}
/*Allocation of substrings into pointers array */
void    ft_alloc_copy(char const *s, char c, char **split)
{
    size_t          len;
    int             index;
    size_t          i;

    i = 0;
    index = 0;
    while (s[i] != '\0' && s[i] != c)
    {
        len = 0;
        while (s[i + len] != c && s[i + len] != '\0')
        {
            if (s[i + len + 1] == c || s[i + len + 1] == '\0')
            {
                split[index] = ft_substr(s, s[i+ len], len);
                if (!split[index])
                    free(split[index]);
                index++;
            }
            len++;
        }
        i += len;
    }
}
/*Counting delimiters; strings can be max the number of delimiters +1 */
size_t    ft_sep_count(char const *s, char c)
{
    int i;
    size_t sep;
 
    i = 0;
    sep = 0;
    if (s[i] != c && s[i] != '\0')
    {
        sep++;
        i++;
    }
    while (s[i])
    {
        if(s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
            sep++;
        i++;
    }
    return(sep);
}
