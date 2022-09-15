/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfanucch <dfanucch@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:15:14 by dfanucch          #+#    #+#             */
/*   Updated: 2022/09/14 14:35:30 by dfanucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_strndup(const char *s1, size_t n)
{
	char	*result;

	result = (char *)ft_calloc(n + 1, sizeof(char));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s1, n + 1);
	return (result);
}

size_t	ft_string_count(char const *s, char c)
{
	size_t		sc;
	char const	*trav_s;
	t_state		state;

	sc = 0;
	trav_s = s;
	state = OUT;
	while (*trav_s)
	{
		if (*trav_s != c && state == OUT)
		{
			sc++;
			state = IN;
		}
		else if (*trav_s == c)
			state = OUT;
		trav_s++;
	}
	return (sc);
}

size_t	ft_string_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

void	*ft_free_words(char **words, size_t i)
{
	while (i > 0)
	{
		free(words[i]);
		i--;
	}
	free(words[i]);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	sc;
	size_t	i;
	size_t	walked;
	size_t	len;

	i = 0;
	walked = 0;
	sc = ft_string_count(s, c);
	words = (char **)ft_calloc(sc + 1, sizeof(char *));
	if (!words)
		return (NULL);
	while (i < sc)
	{
		while (s[walked] == c)
			walked++;
		len = ft_string_len(s + walked, c);
		words[i] = ft_strndup(s + walked, len);
		if (!words[i])
			return (ft_free_words(words, i));
		walked += len;
		i++;
	}
	words[i] = NULL;
	return (words);
}
