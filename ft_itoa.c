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
	char	is_negative;

	index = nlen;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			result[1] = '2';
			n += 2000000000;
		}
		is_negative = 1;
		n *= -1;
	}
	result[index] = '\0';
	while (index > 0)
	{
		if (!result[index - 1])
			result[index - 1] = n % 10 + '0';
		index--;
		n /= 10;
	}
	if (is_negative)
		result[0] = '-';
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
