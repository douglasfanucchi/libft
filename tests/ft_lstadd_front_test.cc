#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTlistaddfront, itShouldPrependANodeIntoTheList) {
	t_list *head = NULL;

	ft_lstadd_front(&head, ft_lstnew((void*)100));

	ASSERT_EQ((void*)100, head->content);
	ASSERT_EQ(NULL, head->next);
	free(head);
}
