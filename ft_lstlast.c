#include "libft.h"
/*
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}t_list;
Parameters #1. The beginning of the list.
Return value Last element of the list.
*/

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
