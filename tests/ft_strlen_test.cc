#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTstrlen, itShouldReturn0ForAnEmptyString) {
	int expected = 0;

	size_t result = ft_strlen("");

	ASSERT_EQ(expected, result);
}

TEST(FTstrlen, itShouldReturn1ForAStringWithSingleChar) {
	int expected = 1;

	size_t result = ft_strlen("a");

	ASSERT_EQ(expected, result);
}
