#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTitoa, itShouldReturnStringRepresentationOfOneDigitNonNegativeNumber) {
	char *result = ft_itoa(0);

	ASSERT_STREQ("0", result);
	free(result);

	result = ft_itoa(9);
	ASSERT_STREQ("9", result);
	free(result);
}

TEST(FTitoa, itShouldReturnStringRepresentationOfMultipleDigitsNonNegativeNumber)
{
	char *result = ft_itoa(2147483647);

	ASSERT_STREQ("2147483647", result);
	free(result);
}

TEST(FTitoa, itShouldReturnStringRepresentationOfOneDigitNegativeNumber)
{
	char *result = ft_itoa(-1);

	ASSERT_STREQ("-1", result);
	free(result);
}
