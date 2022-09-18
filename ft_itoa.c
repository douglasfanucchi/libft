/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfanucch <dfanucch@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 11:50:00 by dfanucch          #+#    #+#             */
/*   Updated: 2022/09/11 11:50:00 by dfanucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbrlen(int n)
{
	size_t	nbrlen;

	nbrlen = 1;
	if (n < 0)
		nbrlen++;
	while (n / 10 != 0)
	{
		nbrlen++;
		n /= 10;
	}
	return (nbrlen);
}

static void	ft_fill_numbers(char *result, int n, size_t nlen)
{
	size_t	index;
	int		is_negative;

	is_negative = 0;
	if (n < 0)
		is_negative = 1;
	index = nlen;
	result[index--] = '\0';
	while (index > 0)
	{
		if (n < 0)
			result[index] = n % 10 * -1 + '0';
		else
			result[index] = n % 10 + '0';
		n /= 10;
		index--;
	}
	if (is_negative)
		result[index] = '-';
	else
		result[index] = n + '0';
}

char	*ft_itoa(int n)
{
	size_t	nlen;
	char	*result;

	nlen = ft_nbrlen(n);
	result = (char *)ft_calloc(nlen + 1, sizeof(char));
	if (!result)
		return (NULL);
	ft_fill_numbers(result, n, nlen);
	return (result);
}
