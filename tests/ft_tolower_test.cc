#include <gtest/gtest.h>

TEST(FTtolower, itShouldReturnLowercaseLetter) {
	char c = 'A';

	int result = ft_tolower((unsigned char)c);

	ASSERT_EQ('a', result);
}

TEST(FTtolower, itShouldReturnSameValueAsInputWhenItsNotUppercaseLetter) {
	char c = 'b';

	int result = ft_tolower((unsigned char)c);

	ASSERT_EQ('b', result);
}
