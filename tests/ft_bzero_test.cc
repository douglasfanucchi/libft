#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
	#include <string.h>
}

TEST(FTbzero, itShouldEraseFirstByteFromInput) {
	char buffer[1];
	buffer[0] = 'c';

	ft_bzero(buffer, 1);

	ASSERT_STREQ("", buffer);
}

TEST(FTbzero, itShouldNotEraseAnyBytes) {
	char buffer[12];
	strcpy(buffer, "hello world");

	ft_bzero(buffer, 0);

	ASSERT_STREQ(buffer, "hello world");
}

TEST(FTbzero, itShouldEraseNBytesStarting) {
	size_t n = 5;
	char buffer[12];
	strcpy(buffer, "hello world");

	ft_bzero(buffer, n);

	ASSERT_TRUE(memcmp(buffer, "\0\0\0\0\0 world", 12) == 0);
}
