#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTbzero, itShouldEraseFirstByteFromInput) {
	char buffer[1];
	buffer[0] = 'c';

	ft_bzero(buffer, 1);

	ASSERT_STREQ("", buffer);
}
