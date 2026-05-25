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
