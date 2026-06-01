#include <libft.h>

void	ft_lstdelone(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	f(lst->content);
	free(lst);
}
