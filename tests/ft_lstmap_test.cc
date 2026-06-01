#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

void *f(void *content)
{
	return ft_strdup("hello world!");
}

void _assert(void *content)
{
	ASSERT_STREQ("hello world!", (char *)content);
}

TEST(FTlstmap, itShouldCreateANewListWithHelloWorldStringInsideContent) {
	t_list *node = NULL;
	ft_lstadd_back(&node, ft_lstnew(NULL));
	ft_lstadd_back(&node, ft_lstnew(NULL));

	t_list *result = ft_lstmap(node, f, free);

	ASSERT_EQ(2, ft_lstsize(result));
	ft_lstiter(result, _assert);

	ft_lstclear(&result, free);
	ft_lstclear(&node, free);
}
