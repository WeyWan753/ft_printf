/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabin-wa <wabin-wa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 00:57:55 by pola              #+#    #+#             */
/*   Updated: 2025/10/30 20:01:33 by wabin-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_overlap(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*src_c;

	i = 0;
	src_c = (char *) src;
	while (i < n)
	{
		if (&src_c[i] == dest)
			return (1);
		i++;
	}
	return (0);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest_c;
	char		*src_c;
	size_t		i;

	if (is_overlap(dest, src, n))
	{
		dest_c = (char *)dest;
		src_c = (char *)src;
		i = 0;
		if (!dest && !src)
			return (0);
		while (i < n)
		{
			dest_c[n - i - 1] = src_c[n - i -1];
			i++;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}
