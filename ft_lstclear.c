#include "libft.h"
/*Parameters 
#1. The address of a pointer to an element.
#2. The address of the function used to delete the content of the element.
Deletes and frees the given element and every successor of that element, 
using the function ’del’ and free(3).
Finally, the pointer to the list must be set to NULL.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*current;

	if (*lst == NULL)
		return ;
	current = *lst;
	while (current != NULL)
	{
		temp = current->next;
		ft_lstdelone(current, del);
		current = temp;
	}
	*lst = NULL;
}
/* other version
while (current != NULL)
	{
		temp = current->next;
		del(current->content);
		free (current);
		current = temp;
	}

int	main(void)
{
	t_list	*root;

	root.content = 15;
	root.next = malloc(sizeof(t_list));
	root.next->content = -2;
	root.next->next = malloc(sizeof(t_list));
	ft_lstclear(&root, &some_function);
}
*/