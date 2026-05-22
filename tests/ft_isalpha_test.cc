#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTisAlpha, itShouldReturn0ForNonAlphaInputs) {
	int input = '\\';
	int expected = 0;

	int result = ft_isalpha(input);

	ASSERT_EQ(expected, result);
}

TEST(FTisAlpha, itShouldReturn1ForLowerCaseAlphaInputs) {
	int input = 'a';
	int expected = 1;

	int result = ft_isalpha(input);

	ASSERT_EQ(expected, result);
}

TEST(FTisAlpha, itShouldReturn1ForUpperCaseAlphaInputs) {
	int input = 'A';
	int expected = 1;

	int result = ft_isalpha(input);

	ASSERT_EQ(expected, result);
}
