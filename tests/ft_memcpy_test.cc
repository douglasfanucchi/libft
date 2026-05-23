#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
	#include <stdlib.h>
}

TEST(FTmemcpy, itShouldCopyByteFromSrcToDest) {
	const char *src = "a";
	char *dest = (char *)malloc(sizeof(char) * 1);

	ft_memcpy(dest, src, 1);

	EXPECT_STREQ(src, dest);
	free(dest);
}
