/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pola <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 10:33:40 by pola              #+#    #+#             */
/*   Updated: 2025/11/02 23:01:28 by pola             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s;

	if (s1 == 0 || s2 == 0)
		return (0);
	s = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (s == 0)
		return (0);
	*s = 0;
	ft_strlcat(s, s1, ft_strlen(s1) + 1);
	ft_strlcat(s, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (s);
}
/*
#include <stdio.h>

int main()
{
	char *s = ft_strjoin("abc","def");
	printf("\n\n%s",s);
}
*/
