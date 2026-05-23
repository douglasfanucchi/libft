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
