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
