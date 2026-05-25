#include <libft.h>

int	ft_memcmp(const void *m1, const void *m2, size_t n)
{
	size_t	i;
	unsigned const char *b1;
	unsigned const char *b2;

	b1 = m1;
	b2 = m2;
	i = 0;
	while (i < n - 1 && b1[i] == b2[i])
		i++;
	return b1[i] - b2[i];
}
