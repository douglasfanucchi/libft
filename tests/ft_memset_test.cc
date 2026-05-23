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

TEST(FTmemset, itShouldReturnSamePointerAsTheOnePassedInTheInput) {
	char buffer[8];

	void *result = ft_memset(buffer, 0, 1);

	ASSERT_EQ(buffer, result);
}
