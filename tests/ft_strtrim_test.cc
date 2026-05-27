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

TEST(FTstrtrim, itShouldNotRemoveAnyCharacterWhenSetIsEmptyOrNull) {
	const char *str = " hello world-/";

	char *result = ft_strtrim(str, "");

	ASSERT_STREQ(" hello world-/", result);
	ASSERT_NE(str, result);
	free(result);
	
	result = ft_strtrim(str, NULL);
	ASSERT_STREQ(" hello world-/", result);
	ASSERT_NE(str, result);
	free(result);
}
