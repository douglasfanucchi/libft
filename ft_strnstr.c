/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfanucch <dfanucch@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 15:28:29 by dfanucch          #+#    #+#             */
/*   Updated: 2022/09/09 15:28:30 by dfanucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	if (!*s2)
		return ((char *)s1);
	if (n == 0)
		return (0);
	while (*(s1 + i))
	{
		j = 0;
		if (*(s1 + i) == *(s2 + j))
		{
			k = i;
			while (*(s1 + k) && *(s2 + j) && k < n)
				if (*(s1 + k++) != *(s2 + j++))
					break ;
			if (*(s2 + j) == '\0' && *(s1 + --k) == *(s2 + --j))
				return (((char *)s1) + i);
		}
		i++;
	}
	return ((void *)0);
}
