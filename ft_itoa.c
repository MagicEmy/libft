#include "libft.h"

char	*ft_itoa(int n);
int		ft_n_count(int	n);
/*
int	main(void)
{
	int		n;
	char	*string;

	n = -123;
	string = ft_itoa(n);
	printf("%s", string);
}
*/

char	*ft_itoa(int n)
{
	long int	number;
	char		*ptr;
	int			i;

	number = (long int)n;
	i = ft_n_count(n);
	ptr = (char *)malloc (sizeof(char) * (i + 1));
	if (!ptr)
		return (NULL);
	if (n < 0)
	{	
		ptr[0] = '-';
		number = number * -1;
	}
	ptr[i--] = '\0';
	while (i >= 0)
	{
		if (n < 0 && i == 0)
			break ;
		ptr[i] = (number % 10) + '0';
		number = number / 10;
		i--;
	}
	return (ptr);
}

int	ft_n_count(int	n)
{
	long int	number;
	int			len;

	len = 0;
	number = (long)n;
	if (number <= 0)
	{
		len++;
		number = number * -1;
	}
	while (number)
	{
		number = number / 10;
		len++;
	}
	return (len);
}
