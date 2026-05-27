#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTsplit, itShouldReturnArrayWithSingleElementWhichValueIsNullWhenStringIsEmpty) {
	char	**result = ft_split("", ' ');

	ASSERT_EQ(NULL, result[0]);

	free(result);
}

TEST(FTsplit, itShouldSeparateSingleStringIntoTwo) {
	const char *src = "hello world";

	char **result = ft_split(src, ' ');

	ASSERT_STREQ("hello", result[0]);
	ASSERT_STREQ("world", result[1]);
	size_t	i = 0;
	while (result[i])
		free(result[i++]);
	free(result);
}

TEST(FTsplit, itShouldSkipSequencedDelimiters) {
	const char *src = "hello       world";

	char **result = ft_split(src, ' ');

	ASSERT_STREQ("hello", result[0]);
	ASSERT_STREQ("world", result[1]);
	size_t	i = 0;
	while (result[i])
		free(result[i++]);
	free(result);
}
