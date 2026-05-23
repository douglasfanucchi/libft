#include <libft.h>

void	ft_bzero(void *ptr, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((char *)ptr)[i++] = 0;
}
