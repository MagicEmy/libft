#include "libft.h"
/*
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}t_list;
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*new_el;

	new_el = (t_list *)malloc(sizeof(t_list *));
	if (!new_el)
		return (NULL);
	new_el -> content = content;
	new_el -> next = NULL;
	return (new_el);
}
