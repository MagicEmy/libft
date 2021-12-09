#include "libft.h"

/*
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}t_list;
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*new_el;

	new_el = (t_list *)malloc(sizeof(t_list *));
	if (new_el != NULL)
	{
		new_el -> next = *lst;
		*lst = new;
	}
}
