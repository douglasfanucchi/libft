#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTisAlNum, itShouldReturn0ForNonAlphaNumInputs) {
	int input = '\\';
	int expected = 0;

	int result = ft_isalnum(input);

	ASSERT_EQ(expected, result);
}

TEST(FTisAlNum, itShouldReturn1ForLowerCaseAlphaInputs) {
	int input = 'a';
	int expected = 1;

	int result = ft_isalnum(input);

	ASSERT_EQ(expected, result);
}

TEST(FTisAlNum, itShouldReturn1ForUpperCaseAlphaInputs) {
	int input = 'A';
	int expected = 1;

	int result = ft_isalnum(input);

	ASSERT_EQ(expected, result);
}


TEST(FTisAlNum, itShouldReturn1ForDigitsChars) {
	int input = '9';
	int expected = 1;

	int result = ft_isalnum(input);

	ASSERT_EQ(expected, result);
}

TEST(FTisAlnum, itShouldReturn0ForNegativeInputs) {
	int input = -255;
	int expected = 0;

	int result = ft_isalnum(input);

	ASSERT_EQ(expected, result);
}
