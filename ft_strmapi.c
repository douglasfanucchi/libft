#include <libft.h>

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*result;

	i = 0;
	len = ft_strlen(s);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
		return ((void *)0);
	while (i < len)
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = 0;
	return (result);
}
