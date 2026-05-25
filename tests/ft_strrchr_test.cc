#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTstrrchr, itShouldReturnLastOccurenceOfAByte) {
	const char *str = "hello";

	const char *result = ft_strrchr(str, 'l');

	ASSERT_EQ(str + 3, result);
}

TEST(FTstrrchr, itShouldReturnNULLWhenByteIsNotFound) {
	const char *str = "hello";

	const char *result = ft_strrchr(str, 'w');

	ASSERT_EQ(NULL, result);
}
