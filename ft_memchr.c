/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dode-lim <dode-lim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 14:37:49 by dode-lim          #+#    #+#             */
/*   Updated: 2026/06/07 12:49:56 by dode-lim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*uchar;

	i = 0;
	uchar = (void *)s;
	if (!uchar)
		return ((void *)0);
	while (i < n)
	{
		if (uchar[i] == (unsigned char)c)
			return (uchar + i);
		i++;
	}
	return ((void *)0);
}
