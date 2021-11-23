#include "libft.h"
/*
int	main(void)
{
	int	nb;

	nb = -2147483648;
	ft_putnbr_fd(nb, 1);
	return (0);
}
*/

void	ft_putnbr_fd(int n, int fd)
{
	long int	lnum;

	lnum = n;
	if (lnum < 0)
	{
		ft_putchar_fd('-', fd);
		lnum = lnum * -1;
	}
	if (lnum > 9)
	{
		ft_putnbr_fd(lnum / 10, fd);
	}
	ft_putchar_fd(lnum % 10 + '0', fd);
}
