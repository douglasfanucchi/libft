#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTsubstr, itShouldCreateSubstringOfSizeNStartingFromIthIndex) {
	unsigned int i = 6;
	size_t n = 5;
	const char *src = "hello world";

	char *result = ft_substr(src, i, n);

	ASSERT_STREQ("world", result);
	ASSERT_NE(src + 6, result);
	free(result);
}

TEST(FTsubstr, itShouldReturnEmptyStringWhenInvalidIndexIsPassed) {
	unsigned int i = 11;
	size_t n = 2;
	const char *src = "hello world";

	char *result = ft_substr(src, i, n);
	
	ASSERT_STREQ("", result);
	free(result);
}

TEST(FTsubstr, itShouldReturnStringWithAtMostSizeNStartingFromIthIndex) {
	unsigned int i = 6;
	size_t n = 10;
	const char *src = "hello world";

	char *result = ft_substr(src, i, n);

	ASSERT_STREQ("world", result);
	ASSERT_EQ(5, ft_strlen(result));
	ASSERT_NE(src + 6, result);
	free(result);
}
