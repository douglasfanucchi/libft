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

TEST(FTmemcpy, itShouldNotCopyAnyBytes) {
	const char *src = "a";
	char *dest = (char *)malloc(sizeof(char) * 1);
	dest[0] = 'z';

	ft_memcpy(dest, src, 0);

	EXPECT_EQ('z', dest[0]);
	free(0);
}

TEST(FTmemcpy, itShouldCopyNBytes) {
	int n = 5;
	const char *src = "hello world";
	char *dest = (char *)malloc(sizeof(char) * (n + 1));
	dest[n] = 0;

	ft_memcpy(dest, src, n);

	EXPECT_STREQ("hello", dest);
	free(dest);
}
