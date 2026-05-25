#include <libft.h>

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i] && str[i] != c)
		i++;
	if (!str[i])
		return ((void *)0);
	return ((char *)(str + i));
}
