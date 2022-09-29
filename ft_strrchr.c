/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfanucch <dfanucch@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 15:04:24 by dfanucch          #+#    #+#             */
/*   Updated: 2022/09/29 15:04:46 by dfanucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*s_trav;

	s_trav = (char *)s;
	while (*s_trav)
		s_trav++;
	while (s_trav != s && *s_trav != (unsigned char)c)
		s_trav--;
	if (*s_trav == (unsigned char)c)
		return ((char *)s_trav);
	return (NULL);
}
