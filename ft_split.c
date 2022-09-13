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

static size_t	occurrences_qty(char const *s, char c)
{
	size_t	qty;
	char	*s_trav;
	char	*next_occurrence;

	if (c == '\0')
		return (1);
	qty = 0;
	if (*s == c)
		qty++;
	s_trav = (char *)s + 1;
	while (*s_trav)
	{
		next_occurrence = ft_strchr(s_trav, c);
		if (next_occurrence == NULL)
			break ;
		s_trav = next_occurrence + 1;
		qty++;
	}
	return (qty);
}

static size_t	*ft_index_occurrences(char const *s, char c, size_t qty)
{
	char const	*s_trav;
	char const	*next_occurrence;
	size_t		*occurrences;

	if (qty == 0)
		return (NULL);
	occurrences = (size_t *)ft_calloc(qty, sizeof(size_t));
	if (!occurrences)
		return (NULL);
	if (*s == c)
		*occurrences = 0;
	s_trav = s + 1;
	while (*s_trav)
	{
		next_occurrence = ft_strchr(s_trav, c);
		if (next_occurrence == NULL)
			break ;
		*occurrences = (size_t)(next_occurrence - s);
		occurrences++;
		s_trav = next_occurrence + 1;
	}
	return (occurrences - qty);
}

// char	**ft_split(char const *s, char c)
// {
// }

int	main()
{
	char	*s = "douglas fanucchi";
	char	c = 'x';
	size_t	qty = occurrences_qty(s, c);
	size_t	*indexes = ft_index_occurrences(s, c, qty);
}
