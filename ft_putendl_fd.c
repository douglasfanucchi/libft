#include <libft.h>

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, "\n", 1);
}
