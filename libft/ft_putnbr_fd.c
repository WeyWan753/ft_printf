/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pola <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 18:31:31 by pola              #+#    #+#             */
/*   Updated: 2025/11/02 15:00:24 by wabin-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	number;

	number = (long int) n;
	if (number >= 0 && number / 10 == 0)
		ft_putchar_fd('0' + number, fd);
	else if (number < 0 && (-number) / 10 == 0)
	{
		ft_putchar_fd('-', fd);
		ft_putchar_fd('0' - number, fd);
	}
	else if (number >= 0 && number / 10 != 0)
	{
		ft_putnbr_fd(number / 10, fd);
		ft_putchar_fd('0' + number % 10, fd);
	}
	else
	{
		ft_putnbr_fd(-((-number) / 10), fd);
		ft_putchar_fd('0' + (-number) % 10, fd);
	}
}
