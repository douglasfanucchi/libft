#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTlist, itShouldCreateANewFreeableNodeWithNULLAsContentAndNext) {
	t_list	*node = ft_lstnew(NULL);

	ASSERT_EQ(NULL, node->content);
	ASSERT_EQ(NULL, node->next);

	free(node);
}
