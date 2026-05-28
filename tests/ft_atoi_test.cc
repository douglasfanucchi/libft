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

TEST(FTatoi, itShouldReturnMultipleDigitsNumberAsInt)
{
	int result = ft_atoi("10");

	ASSERT_EQ(10, result);

	result = ft_atoi("-10");

	ASSERT_EQ(-10, result);
}

TEST(FTatoi, itShouldReturnMin32BitsInt) {
	int result = ft_atoi("-2147483648");

	ASSERT_EQ(-2147483648, result);
}

TEST(FTatoi, itShouldSkipSpacesAndComputeNumber) {
	int result = ft_atoi("\t\n\v\f\r -1");

	ASSERT_EQ(-1, result);
}
