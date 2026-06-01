#include <libft.h>

t_list	*ft_lstmap(t_list *node, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*current;
	t_list	*prev;

	head = (void *)0;
	prev = (void *)0;
	while (node)
	{
		current = ft_lstnew(f(node->content));
		if (prev)
			prev->next = current;
		if (!head)
			head = current;
		if (!current)
		{
			ft_lstclear(&head, del);
			break;
		}
		prev = current;
		node = node->next;
	}
	return (head);
}
