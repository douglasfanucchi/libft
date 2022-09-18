/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfanucch <dfanucch@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 23:21:52 by dfanucch          #+#    #+#             */
/*   Updated: 2022/09/11 23:21:54 by dfanucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_substr_len(char const *s, unsigned int start, size_t size)
{
	size_t	s_len;
	size_t	substr_len;

	substr_len = 0;
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (substr_len);
	while (substr_len < size && s[substr_len + start])
		substr_len++;
	return (substr_len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;
	size_t	substr_len;

	substr_len = ft_substr_len(s, start, len);
	substr = (char *)ft_calloc(substr_len + 1, sizeof(char));
	if (substr == NULL)
		return (NULL);
	if (!substr_len)
		return (substr);
	i = 0;
	while (s[start] && i < substr_len)
		substr[i++] = s[start++];
	return (substr);
}
