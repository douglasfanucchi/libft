#include <gtest/gtest.h>

extern "C" {
	#include <libft.h>
}

TEST(FTputnbrfd, itShouldPrintOnFdASingleDigitPositiveNumber) {
	int fd[2];
	pipe(fd);
	char result[2];

	ft_putnbr_fd(1, fd[1]);
	read(fd[0], result, 1);
	result[1] = 0;

	ASSERT_STREQ("1", result);

	close(fd[0]);
	close(fd[1]);
}
