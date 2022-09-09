/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfanucch <dfanucch@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 10:49:04 by dfanucch          #+#    #+#             */
/*   Updated: 2022/09/08 10:49:05 by dfanucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s && *s != (unsigned char) c)
		s++;
	if (*s == (unsigned char)c)
		return ((char *)s);
	return ((void *)0);
}
