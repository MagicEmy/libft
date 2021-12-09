#include "libft.h"
/*
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}t_list;
Parameters 
#1.The address of a pointer to the first link of a list.
#2.The address of a pointer to the element to be added to the list.
Adds the element ’new’ at the end of the list.
*/
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*addlast;

	addlast = NULL;
	if (!*lst)
		*lst = new;
	else
	{
		addlast = ft_lstlast(*lst);
		addlast->next = new;
		new->next = NULL;
	}
}
