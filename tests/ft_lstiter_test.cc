#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

void	f(void *content)
{
	*((int *)content) = 42;
}

TEST(FTlstiter, itShouldIterateThroughAllTheNodesAndAssign42ToItsContent) {
	t_list *node = NULL;
	ft_lstadd_back(&node, ft_lstnew(malloc(sizeof(int))));
	ft_lstadd_back(&node, ft_lstnew(malloc(sizeof(int))));
	ft_lstadd_back(&node, ft_lstnew(malloc(sizeof(int))));

	ft_lstiter(node, f);

	t_list *tmp = node;
	while (tmp)
	{
		ASSERT_EQ(42, *(int *)tmp->content);
		tmp = tmp->next;
	}

	ft_lstclear(&node, free);
}
