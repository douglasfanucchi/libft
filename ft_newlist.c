/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfanucch <dfanucch@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 20:03:48 by dfanucch          #+#    #+#             */
/*   Updated: 2022/12/20 20:03:48 by dfanucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	**ft_newlist(void)
{
	t_list	**list;

	list = malloc(sizeof(t_list **));
	if (!list)
		return (NULL);
	*list = NULL;
	return (list);
}
