#include <unistd.h>
#include <stdlib.h>

size_t  ft_strlen(const char *s);

static int ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	left;
	size_t	right;

    //LEFT TRIM calculation: start from 0 and increment 'left' variable since current character is in set.
	left = 0;
	while (s1[left] && ft_char_in_set(s1[left], set))
		left++;


	//RIGHT TRIM calculation: start from s1 length and decrement 'right' variable since current character is in set.
	right = ft_strlen(s1);
	while (right > left && ft_char_in_set(s1[right - 1], set))
		right--;

    //now we have the new shrinked size. Alloc mem for the new string
	str = (char*)malloc(sizeof(*s1) * (right - left + 1));
	if (!str)
		return (NULL);
	
	//copy data	
	i = 0;
	while (left < right)
		str[i++] = s1[left++];
		
	str[i] = '\0';  //null terminator at the end of the string
	
	//return new string
	return (str);
}

