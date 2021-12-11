#include "libft.h"

/*
int		main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Do not ";
	s2 = "disturb!";
	printf("%s", ft_strjoin(s1, s2));
}
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	size_t	total_len;
	size_t	i;
	char	*new_string;

	i = 0;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	total_len = s1_len + s2_len + 1;
	if (!s1 && !s2)
		return (NULL);
	new_string = (char *)malloc(sizeof(char) * total_len);
	if (!new_string)
		return (new_string);
	while (*s1)
		new_string[i++] = *s1++;
	while (*s2)
		new_string[i++] = *s2++;
	new_string[i] = '\0';
	return (new_string);
}

	/*
	ft_strlcat(new_string, s1, s1_len);
	ft_strlcat((new_string + s1_len), s2, s2_len);
	new_string[total_len - 1] = '\0';
	*/
