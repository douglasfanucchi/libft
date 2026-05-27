#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTsplit, itShouldReturnArrayWithSingleElementWhichValueIsNullWhenStringIsEmpty) {
	char	**result = ft_split("", ' ');

	ASSERT_EQ(NULL, result[0]);

	free(result);
}
