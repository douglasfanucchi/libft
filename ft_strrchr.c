/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfanucch <dfanucch@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:59:48 by dfanucch          #+#    #+#             */
/*   Updated: 2022/09/08 10:59:50 by dfanucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	first_char;

	first_char = *s;
	while (*s)
		s++;
	while (*s != first_char && *s != (unsigned char)c)
		s--;
	if (*s == (unsigned char)c)
		return ((char *)s);
	return ((void *)0);
}