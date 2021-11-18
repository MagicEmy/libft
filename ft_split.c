#include "libft.h"

char	**ft_split(char const *s, char c);
size_t	ft_sep_count(char const *s, char c);
void	ft_alloc_copy(char const *s, char c, char **split, size_t sep);
void	ft_free_mem(char **split);
/*
int	main(void)
{
	char		c;
	char const	*s;
	char		**ptr;
	int			cc;

	c = ' ';
	cc = 0;
	s = " go";
	ptr = ft_split(s, c);
	while (ptr[cc])
		printf("|%s|\n", ptr[cc++]);
	return (0);
}
*/

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	sep;

	if (!s)
		return (NULL);
	sep = ft_sep_count(s, c);
	printf("%zu\n", sep);
	split = (char **)ft_calloc((sep + 1), (sizeof(char *)));
	if (!split)
		return (NULL);
	ft_alloc_copy(s, c, split, sep);
	return (split);
}

void	ft_alloc_copy(char const *s, char c, char **split, size_t sep)
{
	size_t		len;
	size_t		index;
	size_t		i;

	i = 0;
	index = 0;
	while (index < sep)
	{
		len = 0;
		while (s[i + len] != c && s[i + len] != '\0')
		{
			len++;
			if (s[i + len] == c || s[i + len] == '\0')
			{
				split[index] = ft_substr(s, i, len);
				if (!split[index])
					ft_free_mem(split);
				index++;
			}
		}
		i += len + 1;
	}
	split[index] = 0;
}

size_t	ft_sep_count(char const *s, char c)
{
	int		i;
	size_t	sep;

	i = 0;
	sep = 0;
	if (s[i] != c && s[i] != '\0')
	{
		sep++;
		i++;
	}
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			sep++;
		i++;
	}
	return (sep);
}

void	ft_free_mem(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}
/*
write(1, ">", 1);
write(1, &s[i], len);
write(1, "<\n", 2);
*/