/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pola <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 15:20:55 by pola              #+#    #+#             */
/*   Updated: 2025/11/01 16:35:48 by pola             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(int n)
{
	long int		number;
	size_t			digit;
	size_t			is_neg;

	digit = 1;
	is_neg = (n < 0);
	number = (long int)n - 2 * (long int)n * is_neg;
	while (number / 10)
	{
		number = number / 10;
		digit++;
	}
	return (digit);
}

char	*ft_itoa(int n)
{
	long int		number;
	size_t			digit;
	char			*str;
	size_t			is_neg;

	is_neg = (n < 0);
	digit = count_digit(n);
	str = malloc(digit + 1 + is_neg);
	if (str == 0)
		return (0);
	str[digit + is_neg] = 0;
	number = (long int)n - 2 * (long int)n * is_neg;
	while (digit > 0)
	{
		str[digit - 1 + is_neg] = number % 10 + '0';
		number = number / 10;
		digit--;
	}
	if (is_neg)
		str[digit] = '-';
	return (str);
}
/*
#include <stdio.h>

int main()
{
	char *str = ft_itoa(-123);
	printf("%s",str);
}
*/
