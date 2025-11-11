/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_helper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabin-wa <wabin-wa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 23:59:07 by wabin-wa          #+#    #+#             */
/*   Updated: 2025/11/09 00:06:20 by wabin-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putnbr_printf(size_t n, char *base)
{
	size_t	digit_symbol_count;
	size_t	digit_count;

	digit_symbol_count = ft_strlen(base);
	digit_count = 0;
	if (n / digit_symbol_count == 0)
	{
		ft_putchar_fd(base[n], 1);
		return (1);
	}
	else
	{
		digit_count += 1 + ft_putnbr_printf(n / digit_symbol_count, base);
		ft_putchar_fd(base[n % digit_symbol_count], 1);
	}
	return (digit_count);
}

size_t	ft_putchar_printf(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

size_t	ft_putstr_printf(char *str)
{
	if (str == 0)
		return (ft_putstr_printf("(null)"));
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

size_t	ft_putpointer_printf(void *p)
{
	if (p == 0)
		return (ft_putstr_printf("(nil)"));
	return (ft_putstr_printf("0x")
		+ ft_putnbr_printf((size_t)p, "0123456789abcdef"));
}

size_t	ft_putint_printf(int n)
{
	long long	number;

	number = n;
	if (number < 0)
		return (ft_putchar_printf('-')
			+ ft_putnbr_printf((size_t)(-number), "0123456789"));
	else
		return (ft_putnbr_printf((size_t)number, "0123456789"));
}
