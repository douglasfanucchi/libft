#include <libft.h>

char	*ft_substr(const char *str, unsigned int i, size_t len)
{
	size_t	size;
	char	*result;

	size = ft_strlen(str);
	if (len > size - i)
		len = size - i;
	len = sizeof(char) * (len + 1);
	if (i >= size)
		return (ft_strdup(""));
	result = malloc(len);
	ft_strlcpy(result, str + i, len);
	return (result);
}
