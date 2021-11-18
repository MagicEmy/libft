#include "libft.h"

int	ft_n_count(int	n);

int	main(void)
{
	int		n;
	char	*string;

	n = 012345;
	string = ft_itoa(n);
	printf("%s", string);
}

char	*ft_itoa(int n)
{
	int	num_len;

	num_len = ft_n_count(n);
	return ("Magic");
}

int	ft_n_count(int	n)
{
	int	len;

	len = 0;
	printf ("1 n = %d\n", n);
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = n * -1;
	}
	printf ("2 n = %d\n", n);
	while (n / 10)
	{
		n = n / 10;
		printf ("loop n = %d\n", n);
		printf ("loop len = %d\n", len);
		len++;
	}
	n = n % 10;
	if (n > 0)
		len ++;
	printf ("end n = %d\n", n);
	printf ("end len = %d\n", len);
	return (len);
}
