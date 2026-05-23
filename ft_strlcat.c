#include <libft.h>

size_t	ft_strlcat(char *dest, const char *src, size_t dsize)
{
	size_t	dest_size;
	size_t	src_size;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	if (dsize < 2)
		return (src_size);
	if (dest_size + src_size < dsize)
		ft_memmove(dest + dest_size, src, src_size + 1);
	else {
		ft_memmove(dest + dest_size, src, dsize - 1 - dest_size);
		dest[dsize - 1] = 0;
	}
	return (dest_size + src_size);
}
