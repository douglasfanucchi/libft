#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTmemcmp, itShouldReturnZeroForNMatchingBytes) {
	const char *m1 = "\xff\x7f\0a\x02hi";
	const char *m2 = "\xff\x7f\0a\x02he";

	int result = ft_memcmp(m1, m2, 6);

	ASSERT_EQ(0, result);
}

TEST(FTmemcmp, itShouldReturnPositiveNumberWhenFirstMemoryHasGreaterByteAtFirstDifference) {
	const char *m1 = "\x00\x7f";
	const char *m2 = "\x00\x7e";

	int result = ft_memcmp(m1, m2, 2);

	ASSERT_TRUE(result > 0);
}
