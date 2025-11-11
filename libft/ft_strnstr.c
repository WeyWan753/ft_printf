/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wabin-wa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 17:54:45 by wabin-wa          #+#    #+#             */
/*   Updated: 2025/10/31 20:43:27 by wabin-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	little_len;
	size_t	big_len;

	if (*little == 0)
		return ((char *)big);
	if (len == 0 || *big == 0)
		return (0);
	little_len = ft_strlen(little);
	big_len = ft_strlen(big);
	i = 0;
	while (i + little_len <= big_len && i + little_len <= len)
	{
		if (ft_strncmp(big + i, little, little_len) == 0)
			return ((char *)big + i);
		i++;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char *s1 = "see FF your FF return FF now FF";
 	char *s2 = "FF";
 	size_t max = strlen(s1);
 	char *i1 = strnstr(s1, s2, max);
 	char *i2 = ft_strnstr(s1, s2, max);

	printf("%s\n",i1);
	printf("%s\n",i2);
}

*/
