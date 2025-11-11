/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabin-wa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 19:55:05 by wabin-wa          #+#    #+#             */
/*   Updated: 2025/11/03 11:16:07 by pola             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_valid(long long result, int sign, const char *nptr)
{
	if (sign == 1 && (result > 922337203685477580L
			|| (result == 922337203685477580L && (*nptr - '0') > 7)))
		return (0);
	if (sign == -1 && (result > 922337203685477580L
			|| (result == 922337203685477580L && (*nptr - '0') > 8)))
		return (0);
	return (1);
}

int	ft_atoi(const char *nptr)
{
	long long	result;
	int			sign;

	sign = 1;
	result = 0;
	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n'
		|| *nptr == '\r' || *nptr == '\v' || *nptr == '\f')
		nptr++;
	if ((*nptr != '-' && *nptr != '+' && (*nptr < '0' || *nptr > '9'))
		|| ((*(nptr + 1) < '0' || *(nptr + 1) > '9')
			&& (*nptr == '-' || *nptr == '+')))
		return (0);
	if (*nptr == '-')
		sign = -1;
	while (*nptr < '0' || *nptr > '9')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		if (!is_valid(result, sign, nptr))
			return (-(sign == 1));
		result = result * 10 + *nptr - '0';
		nptr++;
	}
	return (sign * result);
}
