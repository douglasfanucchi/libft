/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfanucch <dfanucch@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:46:19 by dfanucch          #+#    #+#             */
/*   Updated: 2022/09/09 12:46:19 by dfanucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*cs;

	cs = (unsigned char *)s;
	i = 0;
	if (n == 0)
		return ((void *)0);
	while (cs[i] != (unsigned char)c && i < n - 1)
		i++;
	if (cs[i] == (unsigned char)c)
		return ((void *)(cs + i));
	return ((void *)0);
}
