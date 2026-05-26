#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTstrdup, itShoudDuplicateAStringAsAFreebleMemory) {
	const char *src = "hello world";
	char *result = ft_strdup(src);

	ASSERT_NE(src, result);
	ASSERT_STREQ(src, result);
}
