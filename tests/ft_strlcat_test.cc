#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTstrlcat, itShouldCatanateSingleCharacterToString) {
	const char *src = "b";
	char buffer[3] = {'a', 0};

	size_t result = ft_strlcat(buffer, src, 3);

	ASSERT_EQ(2, result);
	ASSERT_STREQ("ab", buffer);
}

TEST(FTstrlcat, itShouldCatanateNCaractersIntoString) {
	const char *src = "world";
	char buffer[12] = {'h', 'e', 'l', 'l', 'o', ' ', 0};
	
	size_t result = ft_strlcat(buffer, src, 12);

	ASSERT_EQ(11, result);
	ASSERT_STREQ("hello world", buffer);
}

TEST(FTstrlcat, itShouldTruncateWhenFinalStringIsLargerThanDestSize) {
	const char *src = "world";
	char buffer[8] = {'h', 'e', 'l', 'l', 'o', ' ', 0};

	size_t result = ft_strlcat(buffer, src, 8);

	ASSERT_EQ(11, result);
	ASSERT_STREQ("hello w", buffer);
}

TEST(FTstrlcat, itShouldNotCatanateAnything) {
	const char *src = "world";
	char buffer[1] = {0};

	size_t result = ft_strlcat(buffer, src, 1);

	ASSERT_EQ(5, result);
	ASSERT_STREQ("", buffer);
}

TEST(FTstrlcat, itShouldNotCatanateAnythingAndItShouldReturnFinalSizeBasedOnDSIZEPassedAsParameter) {
	const char *src = "world";
	char buffer[12] = {'h', 'e', 'l', 'l', 'o', ' ', 0};

	size_t result = ft_strlcat(buffer, src, 1);

	ASSERT_EQ(6, result);
	ASSERT_STREQ("hello ", buffer);
}
