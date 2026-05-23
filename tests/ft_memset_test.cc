#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
	#include <string.h>
}

TEST(FTmemset, itShouldFillFirstCharacterWithSomeConstantChar) {
	char buffer[8];
	strcpy(buffer, "douglas");

	ft_memset(buffer, 'a', 1);

	ASSERT_STREQ("aouglas", buffer);
}
