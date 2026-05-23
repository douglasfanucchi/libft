#include <gtest/gtest.h>

TEST(FTtolower, itShouldReturnLowercaseLetter) {
	char c = 'A';

	int result = ft_tolower((unsigned char)c);

	ASSERT_EQ('a', result);
}
