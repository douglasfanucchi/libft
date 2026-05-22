#include <gtest/gtest.h>

extern "C" {
	#include <ctype.h>
	#include <libft.h>
}

TEST(FTisDigit, itShouldReturn0ForNonDigitsChars) {
	char input = '\\';
	int expected = 0;

	int result = ft_isdigit(input);

	ASSERT_EQ(expected, result);
}
