#include <libft.h>

void	*ft_memset(void *ptr, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((char *)ptr)[i++] = c;
	return (ptr);
}
