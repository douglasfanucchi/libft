#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
	#include <string.h>
}

TEST(FTmemmove, itSouldCopyAByteFromSrcToDest) {
	char *dest = (char *)malloc(sizeof(char) * 1);

	ft_memmove(dest, "a", 1);

	ASSERT_EQ('a', dest[0]);
	free(dest);
}

TEST(FTmemmove, itShouldNotCopyAnyBytesToDest) {
	char *dest = (char *)malloc(sizeof(char) * 1);
	dest[0] = 'z';

	ft_memmove(dest, "a", 0);

	ASSERT_EQ('z', dest[0]);
	free(dest);
}

TEST(FTmemmove, itShouldCopyNBytesToDest) {
	size_t n = 4;
	const char *src = "hey";
	char *dest = (char *)malloc(sizeof(char) * 4);

	ft_memmove(dest, src, n);

	ASSERT_STREQ(src, dest);

	free(dest);
}

TEST(FTmemmove, itShouldReturnDest) {
	char *dest = (char *)malloc(sizeof(char));

	void *result = ft_memmove(dest, "", 0);

	ASSERT_EQ(dest, result);

	free(dest);
}

TEST(FTmemmove, itShouldSafelyCopyOverlappedMemories) {
	char *memmory = (char *)malloc(sizeof(char *) * 7);
	strcpy(memmory, "hello");

	char *result = (char *)ft_memmove(memmory + 1, memmory, 5);

	ASSERT_STREQ("hello", result);

	free(memmory);
}
