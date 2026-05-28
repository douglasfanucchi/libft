#include <libft.h>

static size_t	ft_min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	return (b);
}

size_t	ft_strlcat(char *dest, const char *src, size_t dsize)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	free_space;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len > dsize)
		dest_len = dsize;
	if (!dsize || dest_len == dsize)
		return(dest_len + src_len);
	free_space = dsize - dest_len - 1;
	ft_memmove(dest + dest_len, src, ft_min(src_len, free_space));
	return (dest_len + src_len);
}
