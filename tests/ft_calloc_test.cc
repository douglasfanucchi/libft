#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTcalloc, itShouldReturnMemoryWithNBytesFilledWithZeros) {
	char *mem = (char *)ft_calloc(10, sizeof(char));

	for(int i = 0; i < 10; i++)
		ASSERT_EQ(0, mem[i]);
	free(mem);
}

TEST(FTcalloc, itShouldReturnNullOnInvalidSpaceRequired) {
	void *mem = ft_calloc(1e5, 1e5);

	ASSERT_EQ(NULL, mem);
	free(mem);
}
