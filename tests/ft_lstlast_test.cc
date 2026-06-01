#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTlstlast, itShouldReturnNULLWhenListIsEmpty) {
	t_list *head = NULL;
	
	t_list *result = ft_lstlast(head);

	ASSERT_EQ(NULL, result);
}

TEST(FTlstlast, itShouldReturnLastElementOfAList)
{
	t_list *head = NULL, *node = ft_lstnew((void *)42);
	ft_lstadd_front(&head, node);
	ft_lstadd_front(&head, ft_lstnew((void *)1));
	ft_lstadd_front(&head, ft_lstnew((void *)2));
	ft_lstadd_front(&head, ft_lstnew((void *)3));

	t_list *result = ft_lstlast(head);

	ASSERT_EQ(node, result);
	while (head)
	{
		t_list *tmp = head;
		head = head->next;
		free(tmp);
	}
}
