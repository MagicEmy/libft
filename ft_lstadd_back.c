/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_lstadd_back.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: emlicame <emlicame@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/13 17:10:51 by emlicame      #+#    #+#                 */
/*   Updated: 2021/12/13 17:10:53 by emlicame      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*addlast;

	if (*lst != NULL)
	{
		addlast = ft_lstlast(*lst);
		addlast->next = new;
	}
	else
	{
		*lst = new;
	}
}
