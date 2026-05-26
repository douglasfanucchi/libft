#include <libft.h>

char	*ft_substr(const char *str, unsigned int i, size_t len)
{
	size_t	size;
	char	*result;

	len = sizeof(char) * (len + 1);
	size = ft_strlen(str);
	if (i >= size)
		return ((void *)0);
	result = malloc(len);
	ft_strlcpy(result, str + i, len);
	return (result);
}
