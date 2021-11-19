#include "libft.h"

char	*ft_itoa(int n);
int		ft_n_count(int	n);
/*
int	main(void)
{
	int		n;
	char	*string;

	n = 123;
	string = ft_itoa(n);
	printf("%s", string);
}
*/
char	*ft_itoa(int n)
{
	int			num_len;
	int			number;
	char		*ptr;
	int			i;

	number = n;
	num_len = ft_n_count(n);
	i = num_len + 1;
	ptr = (char *)malloc (sizeof(char) * (i));
	if (!ptr)
		return (NULL);
	if (n < 0)
	{	
		ptr[0] = '-';
		n = n * -1;
	}
	if (n == 0)
	{	
		ptr[0] = 48;
		ptr[1] = '\0';
		return (ptr);
	}
	i--;
	ptr[i] = '\0';
	i--;
	if (number < 0)
	{
		while (i > 0)
		{
			ptr[i] = (n % 10) + '0';
			n = n / 10;
			i--;
		}
	}
	else if (number > 0)
	{
		while (i >= 0)
		{
			ptr[i] = (n % 10) + '0';
			n = n / 10;
			i--;
		}
	}
	return (ptr);
}

int	ft_n_count(int	n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = n * -1;
	}
	while (n / 10)
	{
		n = n / 10;
		len++;
	}
	n = n % 10;
	if (n > 0)
		len ++;
	return (len);
}
