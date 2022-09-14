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

	result = ft_calloc(n + 1, sizeof(char));
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
		if (*trav_s == c)
			state = OUT;
		else if (state == OUT)
		{
			state = IN;
			sc++;
		}
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

char	**ft_split(char const *s, char c)
{
	char	**strings;
	size_t	sc;
	size_t	i;
	size_t	walked;
	size_t	len;

	i = 0;
	walked = 0;
	sc = ft_string_count(s, c);
	strings = (char **)ft_calloc(sc + 1, sizeof(char *));
	while (i < sc)
	{
		while (s[walked] == c)
			walked++;
		len = ft_string_len(s + walked, c);
		strings[i] = ft_strndup(s + walked, len);
		walked += len;
		i++;
	}
	strings[i] = NULL;
	return (strings);
}
