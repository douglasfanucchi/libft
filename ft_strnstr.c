#include <libft.h>

char *ft_strnstr(const char *haystack, const char *search, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	len = ft_strlen(search);
	while (i < n && haystack[i])
	{
		j = 0;
		while (i + j < n && haystack[i + j] == search[j])
			j++;
		if (j == len)
			return ((char *)haystack + i);
		i++;
	}
	return ((void *)0);
}
