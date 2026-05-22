#include <gtest/gtest.h>

extern "C" {
	#include <ctype.h>
	#include <libft.h>
}

TEST(FTisAlpha, itShouldReturn0ForNonAlphaInputs) {
	char input = '\\';
	int expected = 0;

	int result = ft_isalpha(input);

	ASSERT_EQ(expected, result);
}

TEST(FTisAlpha, itShouldReturn1ForLowerCaseAlphaInputs) {
	char input = 'a';
	int expected = 1;

	int result = ft_isalpha(input);

	ASSERT_EQ(expected, result);
}
