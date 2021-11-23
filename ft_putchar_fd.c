#include "libft.h"
/*
void	ft_putchar_fd(char c, int fd);

int	main(void)
{
	ft_putchar_fd('M', 1);
	return (0);
}
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
