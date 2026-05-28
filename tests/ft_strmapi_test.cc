#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

char	func(unsigned int i, char c)
{
	return 'a';
}

TEST(FTstrmapi, itShouldCreateAStringFilledOfASingleCharacter) {
	char *result = ft_strmapi("hello", func);

	ASSERT_STREQ("aaaaa", result);
	free(result);
}
