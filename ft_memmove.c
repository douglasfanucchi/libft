/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfanucch <dfanucch@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 09:18:19 by dfanucch          #+#    #+#             */
/*   Updated: 2022/09/08 09:18:20 by dfanucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	src += n - 1;
	dest += n - 1;
	while (n-- > 0)
		*(unsigned char *)dest-- = *(unsigned char *)src--;
	return (dest);
}
