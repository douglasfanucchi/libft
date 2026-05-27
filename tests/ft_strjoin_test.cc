#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTstrjoin, itShouldConcatenateTwoStrings) {
	const char *s1 = "hello";
	const char *s2 = "world";

	char *result = ft_strjoin(s1, s2);

	ASSERT_STREQ("hello world", result);
	free(result);
}

TEST(FTstrjoin, itShouldReturnNewCopyFromFirstStringWhenSecondIsNULL) {
	const char *s1 = "hello";

	char *result = ft_strjoin(s1, NULL);

	ASSERT_STREQ(s1, result);
	ASSERT_NE(s1, result);
	free(result);
}

TEST(FTstrjoin, itShouldReturnNewCopyFromSecondStringWhenFirstIsNULL) {
	const char *s = "hello";

	char *result = ft_strjoin(NULL, s);

	ASSERT_STREQ(s, result);
	ASSERT_NE(s, result);
	free(result);
}

TEST(FTstrjoin, itShouldReturnEmptyStringWhenBothParametersAreNULL) {
	char *result = ft_strjoin(NULL, NULL);

	ASSERT_STREQ("", result);
	free(result);
}
