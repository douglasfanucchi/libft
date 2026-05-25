#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTstrncmp, itShouldReturnZeroForMatchingNBytes) {
	const char *s1 = "hello";
	const char *s2 = "hell";
	
	int result = ft_strncmp(s1, s2, 4);

	ASSERT_EQ(0, result);
}
