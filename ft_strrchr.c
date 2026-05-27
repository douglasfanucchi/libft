#include <libft.h>

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str);
	while (i >= 0 && (unsigned char)str[i] != (unsigned char)c)
		i--;
	if (i < 0)
		return ((void *)0);
	return ((char *)(str + i));
}
