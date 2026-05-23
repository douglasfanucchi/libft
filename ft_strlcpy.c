#include <libft.h>

size_t	ft_strlcpy(char *dest, const char *src, size_t dsize)
{
	size_t	src_size;

	src_size = ft_strlen(src);
	if (!dsize)
		return (src_size);
	if (src_size < dsize)
	{
		ft_memcpy(dest, src, ft_strlen(src) + 1);
		return (src_size);
	}
	ft_memcpy(dest, src, dsize - 1);
	dest[dsize - 1] = 0;
	return (src_size);
}
