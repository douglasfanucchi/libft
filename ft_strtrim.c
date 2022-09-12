/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfanucch <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 12:26:27 by dfanucch          #+#    #+#             */
/*   Updated: 2022/09/12 12:26:28 by dfanucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static bool	ft_forbidden_char(char c, char const *set)
{
	return (ft_strchr(set, c));
}

static size_t	ft_forbidden_chars_at_start(char const *s, char const *set)
{
	char const	*s_trav;

	s_trav = s;
	while (*s_trav && ft_forbidden_char(*s_trav, set))
		s_trav++;
	return ((size_t)(s_trav - s));
}

static size_t	ft_forbidden_chars_at_end(char const *s, char const *set)
{
	char const	*tail;
	char const	*tail_trav;

	tail = s + ft_strlen(s) - 1;
	tail_trav = tail;
	while (*tail_trav && ft_forbidden_char(*tail_trav, set))
		tail_trav--;
	return ((size_t)(tail - tail_trav));
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	size;
	size_t	fobidden_chars_at_start;
	size_t	forbidden_chars_at_end;
	size_t	s1_len;

	s1_len = ft_strlen(s1);
	fobidden_chars_at_start = ft_forbidden_chars_at_start(s1, set);
	if (fobidden_chars_at_start == s1_len)
		return ((char *)ft_calloc(1, sizeof(char)));
	forbidden_chars_at_end = ft_forbidden_chars_at_end(s1, set);
	size = s1_len - fobidden_chars_at_start - forbidden_chars_at_end;
	return (ft_substr(s1, fobidden_chars_at_start, size));
}
