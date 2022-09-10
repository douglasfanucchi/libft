/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfanucch <dfanucch@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 18:52:58 by dfanucch          #+#    #+#             */
/*   Updated: 2022/09/09 18:52:58 by dfanucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen((char *)dst);
	src_len = ft_strlen((char *)src);
	i = dst_len;
	j = 0;
	if (dst_len < size - 1 && size > 0)
	{
		while (src[j] && i < size - 1)
			dst[i++] = src[j++];
		dst[i] = 0;
	}
	else if (dst_len > size)
		dst_len = size;
	return (dst_len + src_len);
}
