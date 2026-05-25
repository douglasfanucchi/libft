#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTatoi, itShouldReturnZeroOnNonNumberString) {
	int result = ft_atoi("--1");

	ASSERT_EQ(0, result);
}
