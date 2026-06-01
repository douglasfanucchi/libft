#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTlstlast, itShouldReturnNULLWhenListIsEmpty) {
	t_list *head = NULL;
	
	t_list *result = ft_lstlast(head);

	ASSERT_EQ(NULL, result);
}
