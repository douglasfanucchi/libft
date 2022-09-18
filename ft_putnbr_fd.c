/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfanucch <dfanucch@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 05:27:36 by dfanucch          #+#    #+#             */
/*   Updated: 2022/09/11 05:27:36 by dfanucch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n >= 0 && n < 10)
	{
		ft_putchar_fd(n + '0', fd);
		return ;
	}
	if (n > -10 && n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd(n * -1 + '0', fd);
		return ;
	}
	ft_putnbr_fd(n / 10, fd);
	if (n < 0)
		ft_putchar_fd(n % 10 * -1 + '0', fd);
	else
		ft_putchar_fd(n % 10 + '0', fd);
}
