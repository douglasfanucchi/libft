/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfanucch <dfanucch@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 10:15:14 by dfanucch          #+#    #+#             */
/*   Updated: 2022/09/13 10:15:15 by dfanucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_rows_qty(char const *s, char c)
{
	size_t	rows;

	rows = 1;
	while (*s)
	{
		if (*s == c)
		{
			while (*s == c)
				s++;
			rows++;
		}
		s++;
	}
	return (rows);
}

char	**ft_split(char const *s, char c)
{
	char		**rows;
	char const	*s_trav;
	char const	*head;
	char const	*trimmed;

	trimmed = ft_strtrim(s, &c);
	head = trimmed;
	s_trav = trimmed;
	rows = (char **)ft_calloc(ft_rows_qty(trimmed, c) + 1, sizeof(char *));
	if (!rows)
		return (NULL);
	while (*s_trav)
	{
		if (*s_trav == c)
		{
			*rows++ = ft_substr(trimmed, head - trimmed, s_trav - head);
			while (*s_trav == c)
				s_trav++;
			head = s_trav;
		}
		s_trav++;
	}
	*rows++ = (char *) head;
	*(rows + 1) = NULL;
	return (rows - ft_rows_qty(trimmed, c));
}

int	main()
{
	char **rows = ft_split("-do-uglas-fan-ucchi-", '-');
	while (*rows)
		printf("%s\n", *rows++);
}
