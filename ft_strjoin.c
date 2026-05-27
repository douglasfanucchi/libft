#include <libft.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*result;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (!s2)
		return (ft_strdup(s1));
	if (!s1)
		return (ft_strdup(s2));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	result = malloc(sizeof(char) * (s1_len + s2_len + 1));
	ft_strlcpy(result, s1, sizeof(char) * (s1_len + s2_len + 1));
	ft_strlcat(result, s2, sizeof(char) * (s1_len + s2_len + 1));
	return (result);
}
