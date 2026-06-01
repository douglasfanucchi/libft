#include <libft.h>

void	ft_lstclear(t_list **lst, void (*f)(void *))
{
	t_list	*tmp;

	while (*lst)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		ft_lstdelone(tmp, f);
	}
}
