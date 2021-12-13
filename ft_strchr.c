/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strchr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 17:15:08 by emlicame      #+#    #+#                 */
/*   Updated: 2021/12/13 17:15:09 by emlicame      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*

int	main(void)
{
	int			c;
	const char	*s;

	c = 'u';
	s = "Bibuba";
	printf("|%s|\n", ft_strchr(s, 't' + 256));
	printf("%s", strchr(s, 't' + 256));
	system ("leaks a.out");
	return (0);
}
*/
char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*string;

	i = 0;
	string = (char *)s;
	while (string[i])
	{
		if (string[i] == c)
		{
			return (string + i);
		}
		i++;
	}
	if (c == '\0')
		return (string + i);
	return (NULL);
}
