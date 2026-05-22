#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTstrlen, itShouldReturn0ForAnEmptyString) {
	int expected = 0;

	size_t result = ft_strlen("");

	ASSERT_EQ(expected, result);
}
