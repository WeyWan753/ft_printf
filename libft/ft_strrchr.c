/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pola <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 10:28:44 by pola              #+#    #+#             */
/*   Updated: 2025/11/02 11:03:28 by wabin-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	long int		len;
	unsigned char	*s2;

	s2 = (unsigned char *)s;
	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s2[len] == (unsigned char) c)
			return ((char *)(&s2[len]));
		len--;
	}
	return (0);
}
