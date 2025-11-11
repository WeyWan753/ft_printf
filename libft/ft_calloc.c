/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabin-wa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 20:46:52 by wabin-wa          #+#    #+#             */
/*   Updated: 2025/10/31 21:53:34 by wabin-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	bytes;
	void	*mem;

	if (size != 0)
		if (nmemb > (((size_t) - 1) / size))
			return (0);
	bytes = nmemb * size;
	mem = malloc(bytes);
	if (mem == 0)
		return (0);
	ft_bzero(mem, bytes);
	return (mem);
}
