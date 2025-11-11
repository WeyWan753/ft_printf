/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabin-wa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 20:20:14 by wabin-wa          #+#    #+#             */
/*   Updated: 2025/11/02 10:56:39 by wabin-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	*s2;

	s2 = (unsigned char *)s;
	while (*s2 != (unsigned char)c && *s2)
		s2++;
	if (*s2 == (unsigned char)c)
		return ((char *)s2);
	else
		return (0);
}
