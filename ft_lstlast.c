#include <libft.h>

t_list *ft_lstlast(t_list *head)
{
	if (!head)
		return (head);
	while (head->next)
		head = head->next;
	return (head);
}
