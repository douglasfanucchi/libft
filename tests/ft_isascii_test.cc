#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTisAscii, itShouldReturn0ForNonAsciiValues) {
	int input = 200;
	int expected = 0;

	int result = ft_isascii(input);

	ASSERT_EQ(expected, result);
}
