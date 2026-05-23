#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
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
