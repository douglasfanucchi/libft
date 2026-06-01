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
