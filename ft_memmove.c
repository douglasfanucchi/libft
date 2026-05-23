#include <libft.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (src > dest) {
		return (ft_memcpy(dest, src, n));
	}
	while (n > 0)
	{
		((char *)dest)[n - 1] = ((char *)src)[n - 1];
		n--;
	}
	return (dest);
}
