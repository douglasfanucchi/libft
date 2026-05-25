#include <libft.h>

char	*ft_strchr(const char *str, int c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(str);
	while (i <= len && str[i] != c)
		i++;
	if (i > len)
		return ((void *)0);
	return ((char *)(str + i));
}
