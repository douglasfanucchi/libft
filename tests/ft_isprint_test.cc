#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTisPrint, itShouldReturn0ForNonPrintableChars) {
	int expected = 0;
	int input = 1;

	int result = ft_isprint(input);

	ASSERT_EQ(expected, result);
}

TEST(FTisPrint, itShouldReturn1ForPrintableChars) {
	int input = 'a';
	int expected = 1;

	int result = ft_isprint(input);

	ASSERT_EQ(expected, result);
}
