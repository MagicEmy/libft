/*
#include <stdio.h>
#include <stdlib.h>
*/
#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	number;
	int			sign;
	int			i;

	number = 0;
	sign = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == ' '))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign *= -1;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		number *= 10;
		number += (int)str[i] - '0';
		i++;
	}
	return (number * sign);
}
/*
//2147483647, -2147483648
int	main(void)
{
	char	*text;
	int		numeric;

	text = " 	 -2147483648ab567";
	numeric = ft_atoi(text);
	printf("%d\n", numeric);
	return (0);
}
*/
