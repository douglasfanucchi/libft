#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTsubstr, itShouldCreateSubstringOfSizeNStartingFromIthIndex) {
	unsigned int i = 6;
	size_t n = 5;
	const char *src = "hello world";

	char *result = ft_substr(src, i, n);

	ASSERT_STREQ("hello", result);
	ASSERT_NE(src + 6, result);
	free(result);
}
