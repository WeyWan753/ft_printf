/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pola <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 10:49:11 by pola              #+#    #+#             */
/*   Updated: 2025/11/02 18:21:44 by wabin-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_char_in_str(char c, const char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i[2];
	char	*s;

	if (s1 == 0 || set == 0)
		return (0);
	i[0] = -1;
	while ((i[0]++, 1) && (is_char_in_str(s1[i[0]], set) || s1[i[0]] == 0))
	{
		if (s1[i[0]] == 0)
		{
			s = malloc(1);
			if (s == 0)
				return (0);
			*s = 0;
			return (s);
		}
	}
	i[1] = ft_strlen(s1);
	while (i[1] != i[0] && (is_char_in_str(s1[i[1]], set) || s1[i[1]] == 0))
		i[1]--;
	s = malloc(i[1] - i[0] + 2);
	if (s == 0)
		return (0);
	ft_strlcpy(s, &s1[i[0]], i[1] - i[0] + 2);
	return (s);
}
/*
#include <stdio.h>

int main()
{
	char *s = ft_strtrim("aaaa b   a","a");
	printf("%s\n",s);
}

*/
