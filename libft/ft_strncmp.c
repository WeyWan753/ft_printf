/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pola <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 10:42:45 by pola              #+#    #+#             */
/*   Updated: 2025/10/31 16:53:37 by wabin-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			counter;
	unsigned char	*us1;
	unsigned char	*us2;

	if (n == 0)
		return (0);
	us1 = (unsigned char *)s1;
	us2 = (unsigned char *)s2;
	counter = 0;
	while (us1[counter] == us2[counter] && us1[counter]
		&& us2[counter] && counter < n - 1)
		counter++;
	return (us1[counter] - us2[counter]);
}
