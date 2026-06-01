#include <libft.h>

void	ft_lstadd_back(t_list **lst, t_list *_new)
{
	t_list	*last;

	if (!*lst)
		return (ft_lstadd_front(lst, _new));
	last = ft_lstlast(*lst);
	last->next = _new;
}
