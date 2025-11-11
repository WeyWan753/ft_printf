/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabin-wa <wabin-wa@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 20:42:27 by wabin-wa          #+#    #+#             */
/*   Updated: 2025/11/11 16:14:13 by wabin-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_putvar_printf(va_list *args, char c)
{
	if (c == 'c')
		return (ft_putchar_printf(va_arg(*args, int)));
	else if (c == 's')
		return (ft_putstr_printf(va_arg(*args, char *)));
	else if (c == 'p')
		return (ft_putpointer_printf(va_arg(*args, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_putint_printf(va_arg(*args, int)));
	else if (c == 'u')
		return (ft_putnbr_printf(va_arg(*args, unsigned int), "0123456789"));
	else if (c == 'x')
		return (ft_putnbr_printf(va_arg(*args, unsigned int),
				"0123456789abcdef"));
	else if (c == 'X')
		return (ft_putnbr_printf(va_arg(*args, unsigned int),
				"0123456789ABCDEF"));
	else if (c == '%')
		return (ft_putchar_printf(c));
	else
		return (ft_putchar_printf('%') + ft_putchar_printf(c));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		char_num;
	va_list	args;

	if (str == 0)
		return (-1);
	va_start(args, str);
	char_num = 0;
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			if (*str == 0)
				return (-1);
			char_num += ft_putvar_printf(&args, *str);
		}
		else
			char_num += ft_putchar_printf(*str);
		str++;
	}
	return (char_num);
}
/*
#include <stdio.h>

int main()
{
	int x;
	printf("\nprintf : %d\n", printf("%p"));
	printf("\nft_printf : %d\n", ft_printf("%p"));
}
*/
