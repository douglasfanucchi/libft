#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTstrchr, itShouldFindFirstByteOccurrence) {
	const char *str = "ola";

	char *result = ft_strchr(str, 'a');

	ASSERT_EQ(str + 2, result);
}

TEST(FTstrchr, itShouldReturnNullWhenNotFindingAnyOccurrence) {
	const char *str = "hello";

	char *result = ft_strchr(str, 'x');

	ASSERT_EQ(NULL, result);
}

TEST(FTstrchr, itShouldReturnNullTerminatedByte) {
	const char *str = "hello";

	char *result = ft_strchr(str, 0);

	ASSERT_EQ(str + 5, result);
}

TEST(FTstrchr, itShouldCompareCharsAsUnsignedChar) {
	char str[7] = {'h', 'e', 'l', 'l', 'o', '!', 0};

	char *result = ft_strchr(str, 'h' + 256);

	ASSERT_EQ(str, result);
}
