/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfanucch <dfanucch@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 04:54:24 by dfanucch          #+#    #+#             */
/*   Updated: 2022/09/11 04:54:25 by dfanucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			strlen;
	char			*new_str;

	i = 0;
	strlen = ft_strlen(s);
	new_str = (char *)ft_calloc(strlen + 1, sizeof(char));
	if (!new_str)
		return (NULL);
	while (*s)
	{
		new_str[i] = (*f)(i, *s);
		i++;
		s++;
	}
	new_str[i] = 0;
	return (new_str);
}
