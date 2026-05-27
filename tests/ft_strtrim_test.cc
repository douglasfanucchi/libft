#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTstrtrim, itShouldRemoveAnyCharacterInSetFromTheBeginingAndFromTheEnd) {
	const char *set = " -/";
	const char *str = " hello world-/";

	char *result = ft_strtrim(str, set);

	ASSERT_STREQ("hello world", result);
}
