/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfanucch <dfanucch@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:15:14 by dfanucch          #+#    #+#             */
/*   Updated: 2022/09/17 21:25:09 by dfanucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_create(char const *s, char c, size_t index)
{
	char		**list;
	char const	*start;
	char const	*end;

	start = s;
	while (*start && *start == c)
		start++;
	if (*start == '\0')
		return ((char **)ft_calloc(index + 1, sizeof(char *)));
	end = start;
	while (*end && *end != c)
		end++;
	list = ft_create(end, c, index + 1);
	if (!list)
		return (list);
	list[index] = ft_substr(start, 0, end - start);
	if (!list[index])
	{
		while (list[index])
		{
			list[index] = NULL;
			free(list[index++]);
		}
	}
	return (list);
}

char	**ft_split(char const *s, char c)
{
	return (ft_create(s, c, 0));
}
