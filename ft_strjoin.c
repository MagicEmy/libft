/*
#1. The prefix string.
#2. The suffix string
Return value The new string. NULL if the allocation fails.
Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.
*/

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2);
int     main(void)
{
    char* s1;
    char *s2;

    s1= "Do not ";
    s2 = "disturb!";
    
    printf("%s", ft_strjoin(s1, s2));
}
char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t s1_len;
    size_t s2_len;
    size_t total_len;
    size_t i;
    size_t j;
    char *new_string;
  
    i = 0;
    j = 0;
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    total_len = s1_len + s2_len + 1;
    if (!s1 && !s2)
        return (NULL);
    new_string = (char *)malloc(sizeof(char) * total_len);
    if (!new_string)
        return (new_string);
    ft_strlcat(new_string, s1, s1_len);
    ft_strlcat((new_string + s1_len), s2, s2_len);
    new_string[total_len - 1] = '\0';
    return (new_string);
}
