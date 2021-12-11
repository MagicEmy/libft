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
