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

TEST(FTstrncmp, itShouldReturnPositiveNumberForFirstStringGreaterThanSecondForTheNBytesComparision) {
	const char *s1 = "hemlo";
	const char *s2 = "hello";

	int result = ft_strncmp(s1, s2, 3);

	ASSERT_TRUE(result > 0);
}

TEST(FTstrncmp, itShouldReturnNegativeNumberForFirstStringLessThanSecondForTheNBytesComparision) {
	const char *s1 = "hello";
	const char *s2 = "hemlo";

	int result = ft_strncmp(s1, s2, 3);

	ASSERT_TRUE(result < 0);
}

TEST(FTstrncmp, itShouldReturnPositiveNumberWhenFirstStringUsesCharGreaterThan127) {
	const char *s1 = "\xff ello";
	const char *s2 = "h ello";

	int result = ft_strncmp(s1, s2, 1);

	ASSERT_TRUE(result > 0);
}

TEST(FTstrncmp, itSHouldCompareAtMostNBytesOrWhenItFindsANullTerminatedByte) {
	const char *s1 = "hello\0!";
	const char *s2 = "hello";

	int result = ft_strncmp(s1, s2, 7);

	ASSERT_EQ(0, result);
}

TEST(FTstrncmp, itShouldReturnZeroWhenBytesToCompareIsZero) {
	int result = ft_strncmp("hello", "a", 0);

	ASSERT_EQ(0, result);
}
