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
	while (*set)
		if (*set++ == c)
			return (true);
	return (false);
}

static size_t	ft_start_index(char const *s, char const *set)
{
	char const	*s_trav;

	s_trav = s;
	while (*s_trav && ft_forbidden_char(*s_trav, set))
		s_trav++;
	return ((size_t)(s_trav - s));
}

static size_t	ft_end_index(char const *s, char const *set)
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
	size_t	start_index;
	size_t	end_index;
	size_t	s1_len;

	s1_len = ft_strlen(s1);
	start_index = ft_start_index(s1, set);
	if (start_index == s1_len)
		return ((char *)ft_calloc(1, sizeof(char)));
	end_index = ft_end_index(s1, set);
	size = s1_len - start_index - end_index;
	return (ft_substr(s1, start_index, size));
}
