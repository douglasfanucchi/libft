#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
	#include <stdlib.h>
}

TEST(FTstrlcpy, itShoudlCopyStringWithSingleCharToDest) {
	const char *src = "a";
	char *dest = (char *)malloc(sizeof(char) * 2);

	size_t result = ft_strlcpy(dest, src, 2);

	ASSERT_STREQ(dest, src);
	ASSERT_EQ(1, result);

	free(dest);
}

TEST(FTstrlcpy, itShouldCopyAStringWithNCharactersToDest) {
	int n = 5;
	const char *src = "hello";
	char *dest = (char *)malloc(sizeof(char) * (n + 1));

	size_t result = ft_strlcpy(dest, src, n + 1);

	ASSERT_STREQ(src, dest);

	free(dest);
}
