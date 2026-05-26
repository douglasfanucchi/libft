#include <libft.h>

char	*ft_strdup(const char *str)
{
	char	*result;
	size_t	len;

	len = ft_strlen(str);
	result = malloc(sizeof(char) * (len + 1));
	ft_strlcpy(result, str, sizeof(char) * (len + 1));
	return (result);
}
