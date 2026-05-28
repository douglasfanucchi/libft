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
