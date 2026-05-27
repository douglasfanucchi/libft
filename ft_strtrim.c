#include <libft.h>

static char should_remove(char c, const char *set)
{
	while (*set && *set != c)
		set++;
	return (*set != 0);
}

char	*ft_strtrim(const char *s, const char *set)
{
	const char	*end;

	end = s + ft_strlen(s) - 1;
	if (!set || !*set)
		return (ft_strdup(s));
	while (should_remove(*s, set))
		s++;
	while (should_remove(*end, set))
		end--;
	return (ft_substr(s, 0, end - s + 1));
}
