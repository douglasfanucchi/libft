#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTatoi, itShouldReturnZeroOnNonNumberString) {
	int result = ft_atoi("--1");

	ASSERT_EQ(0, result);
}

TEST(FTatoi, itShouldReturnOneDigitNumberAsInt)
{
	int result = ft_atoi("1");

	ASSERT_EQ(1, result);
}

TEST(FTatoi, itShouldReturnOneDigitNegativeNumberAsInt)
{
	int result = ft_atoi("-1");

	ASSERT_EQ(-1, result);
}
