#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTlstsize, itShouldReturnZeroOnAnEmptyList) {
	t_list *node = NULL;
	
	int result = ft_lstsize(node);

	ASSERT_EQ(0, result);
}
