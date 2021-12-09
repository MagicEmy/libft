#include "libft.h"
/*
#1. The adress of a pointer to an element.
#2. The adress of the function used to iterate on the list.
#3. The adress of the function used to delete the content of an elem. if needed.
Return value: The new list. NULL if the allocation fails.
Iterates the list ’lst’ and applies the function ’f’ to the content of
each element. Creates a new list resulting of the successive applications 
of the function ’f’. The ’del’ function is used to delete the content of 
an element if needed.

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_list;

	if (!lst || !f || !del)
		return (NULL);
	while (lst->next != NULL)
	{
		new = ft_lstnew(f(lst->content));
		if (new)
		{
			ft_lstadd_back(&new_list, new);
		}
		else
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		lst = lst->next;
	}
	return (new_list);
}
*/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*new_list;

	new_list = NULL;
	while (lst)
	{
		new = ft_lstnew(f(lst->content));
		if (!new)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		else
			ft_lstadd_back(&new_list, new);
		lst = lst->next;
	}
	return (new_list);
}
