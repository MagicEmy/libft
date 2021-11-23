#include "libft.h"

/*
int	main(void)
{
	ft_putendl_fd("Don't panic", 1);
	return (0);
}
*/

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
