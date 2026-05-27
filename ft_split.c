#include <libft.h>

static void	*free_matrix(char **matrix, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
		free(matrix[i++]);
	free(matrix);
	return ((void *)0);
}

static size_t	count_words(const char *s, char c)
{
	size_t	result;

	result = 0;
	while (*s)
	{
		while (*s && *s == c)
			s++;
		if (*s)
			result++;
		while (*s && *s != c)
			s++;
	}
	return (result);
}

char	**ft_split(const char *s, char c)
{
	size_t	i[3];
	char	**result;

	i[0] = 0;
	i[1] = 0;
	result = malloc(sizeof(char **) * (count_words(s, c) + 1));
	if (!result)
		return ((void *)0);
	while (s[i[0]] && s[i[0]] == c)
		i[0]++;
	while (s[i[0]])
	{
		i[2] = i[0];
		while (s[i[2]] && s[i[2]] != c)
			i[2]++;
		result[i[1]++] = ft_substr(s, i[0], i[2] - i[0]);
		if (!result[i[1] - 1])
			return ((free_matrix(result, i[1] - 1)));
		while (s[i[2]] && s[i[2]] == c)
			i[2]++;
		i[0] = i[2];
	}
	result[i[1]] = (void *)0;
	return (result);
}
