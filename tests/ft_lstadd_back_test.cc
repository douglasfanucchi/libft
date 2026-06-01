#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTlistaddback, itShouldAddAnElementToTheEndOfAnEmptyList) {
	t_list *head = NULL, *node = ft_lstnew((void*) 42);

	ft_lstadd_back(&head, node);

	ASSERT_EQ(head, node);
	free(node);
}

TEST(FTlistaddback, itShouldAddAnElementToTheEndOfANonEmptyList) {
	int n1 = 42, n2 = 43;
	t_list *head = ft_lstnew(&n1);

	ft_lstadd_back(&head, ft_lstnew(&n2));

	ASSERT_EQ(&n1, head->content);
	ASSERT_EQ(&n2, head->next->content);
	while (head)
	{
		t_list *tmp = head;
		head = head->next;
		free(tmp);
	}
}
