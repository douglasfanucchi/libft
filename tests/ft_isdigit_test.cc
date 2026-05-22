#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTisDigit, itShouldReturn0ForNonDigitsChars) {
	int input = '\\';
	int expected = 0;

	int result = ft_isdigit(input);

	ASSERT_EQ(expected, result);
}

TEST(FTisDigit, itShouldReturn1ForDigitsChars) {
	int input = '9';
	int expected = 1;

	int result = ft_isdigit(input);

	ASSERT_EQ(expected, result);
}
