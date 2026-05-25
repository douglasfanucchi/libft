#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTstrchr, itShouldFindFirstByteOccurrence) {
	const char *str = "ola";

	char *result = ft_strchr(str, 'a');

	ASSERT_EQ(str + 2, result);
}
