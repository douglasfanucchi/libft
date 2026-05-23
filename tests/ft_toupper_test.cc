#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTtoupper, itShouldReturnUppercaseLetter) {
	int c = 'a';

	int result = ft_toupper(c);

	ASSERT_EQ('A', result);
}

TEST(FTtoupper, itShouldNotDoAnythingToNonLowercaseLetter) {
	int c = 'B';

	int result = ft_toupper(c);

	ASSERT_EQ('B', result);
}
