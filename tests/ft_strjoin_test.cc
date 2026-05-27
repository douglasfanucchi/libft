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
