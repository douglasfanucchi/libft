#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTstrnstr, itShouldReturnFirstOccurrenceOfTheWordInsideHaystack) {
	const char *haystack = "hello world!";
	const char *search = "world";

	char *result = ft_strnstr(haystack, search, ft_strlen(haystack));

	ASSERT_EQ(haystack + 6, result);
}
