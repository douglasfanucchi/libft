#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTlstsize, itShouldReturnZeroOnAnEmptyList) {
	t_list *node = NULL;
	
	int result = ft_lstsize(node);

	ASSERT_EQ(0, result);
}

TEST(FTlstsize, itShouldReturnAmountOfNodesInAList) {
	t_list *node = NULL;
	ft_lstadd_front(&node, ft_lstnew(NULL));
	ft_lstadd_front(&node, ft_lstnew(NULL));
	ft_lstadd_front(&node, ft_lstnew(NULL));

	int result = ft_lstsize(node);

	ASSERT_EQ(3, result);
}
