#include <stdio.h>
#include <stdlib.h>

char **ft_alloc_split(char const *s, char c, size_t *q)
{
    size_t i;
    char **split;
    size_t total;

    i = 0;
    total = 0;

    //we are counting how many special char exist in source string, that will be the lengt of output list
    while (s[i])
    {
        if (s[i] == c)
            total++;
        i++;
    }

    //alloc the found number
    split = (char **)malloc(sizeof(char *) * (total + 1));

    (*q) = total;

    *((split + (total))) = 0;

    if (!split)
        return (NULL);
    return (split);
}

static void *ft_add_substring(char **split, char const *s, long left, long right)
{
    //now we have the new shrinked size. Alloc mem for the new string
    char *splitItem = (char *)malloc(sizeof(*s) * (right - left + 1));
    if (!splitItem)
        return (NULL);

    //copy data
    long i = 0;
    while (left < right)
        splitItem[i++] = s[left++];

    splitItem[i] = '\0'; //null terminator at the end of the string
    *split = splitItem;
}

static void *ft_perform_split(char **split, char const *s, char c, size_t *l)
{
    size_t i;

    i = 0;
    *l = 0;
    long left = 0;
    long right = 0;
    while (s[i])
    {

        if (s[i] == c) //when we found a delimiter char
        {
            if (right > left)
            {
                ft_add_substring((split + *l), s, left, right);
                (*l)++;
            }
            left = i + 1;
        }
        right = i + 1;
        i++;
    }

    /*  while ((*(split + l)))
    {
        l++;
        free(*(split + l-1));
    } */
    return (split);
}

char **ft_split(char const *s, char c)
{
    char **split;
    size_t q;
    size_t l;

    if (!(split = ft_alloc_split(s, c, &q)))
        return (NULL);
    if (!ft_perform_split(split, s, c, &l))
        return (NULL);

    while (l < q)
    {
        *((split + l)) = 0;
        l++;
    }
    return (split);
}