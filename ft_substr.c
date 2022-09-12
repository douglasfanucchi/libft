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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	s_len;
	char	*substr;

	s_len = ft_strlen(s);
	if (len > s_len)
		len = s_len;
	substr = (char *)ft_calloc(len + 1, sizeof(char));
	if (substr == NULL)
		return (NULL);
	if (start > s_len)
		return (substr);
	i = 0;
	while (s[start] && i < len)
		substr[i++] = s[start++];
	substr[i] = 0;
	return (substr);
}
