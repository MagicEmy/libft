/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emlicame <emlicame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 15:32:32 by emlicame          #+#    #+#             */
/*   Updated: 2023/03/02 15:33:01 by emlicame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	ft_putchar(char c);

int	main(void)
{
	ft_putchar('M');
	return (0);
}
*/
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
