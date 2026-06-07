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

TEST(FTstrnstr, itShouldReturnFirstOccurrenceLookingUpToNBytesOnHaystack) {
	const char *haystack = "hello world!";
	const char *search = "hello";

	char *result = ft_strnstr(haystack, search, ft_strlen("hello"));

	ASSERT_EQ(haystack, result);
}

TEST(FTstrnstr, itShouldReturnNullWhenOcurrenceIsNotFound) {
	const char *haystack = "hello world";
	const char *search = "hi";

	char *result = ft_strnstr(haystack, search, ft_strlen(haystack));

	ASSERT_EQ(NULL, result);
}

TEST(FTstrntr, itShouldReturnNullWhenItWouldBeNeededToLookupToMoreThanNBytes) {
	const char *haystack = "-hello world";
	const char *search = "hello";

	char *result = ft_strnstr(haystack, search, 5);

	ASSERT_EQ(NULL, result);
}

TEST(FTstrnstr, itShouldReturnHaystackWhenSearchStringIsEmpty) {
	const char *haystack = "hello world";
	const char *search = "";

	char *result = ft_strnstr(haystack, "", 5);

	ASSERT_EQ(haystack, result);
}

TEST(FTstrnstr, itShouldReturnNullWhenOccurrenceIsAfterNullTerminatedByte) {
	const char *haystack = "hello\0world";
	const char *search = "world";

	char *result = ft_strnstr(haystack, search, 11);

	ASSERT_EQ(NULL, result);
}

TEST(FTstrnstr, itShouldReturnNulByteFromEmptyStringWhenSearchingForIt) {
	const char *haystack = "";
	const char *search = "";

	char *result = ft_strnstr(haystack, search, 0);

	ASSERT_EQ(haystack, result);
}

TEST(FTstrnstr, itShouldScanUpToSourceLengthBytes) {
	const char *haystack = "hello";
	const char *search = "hello";

	char *result = ft_strnstr(haystack, search, 6);

	ASSERT_EQ(haystack, result);
}
