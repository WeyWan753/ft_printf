/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pola <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 00:40:08 by pola              #+#    #+#             */
/*   Updated: 2025/11/02 15:04:25 by wabin-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	min;

	if (s == 0)
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len < ft_strlen(s + start))
		min = len;
	else
		min = ft_strlen(s + start);
	str = malloc(min + 1);
	if (str == 0)
		return (0);
	ft_strlcpy(str, s + start, min + 1);
	return (str);
}

/*
#include <stdio.h>

int main()
{
	char s[] = "1123\0aaaaaaaa";
	char *str = ft_substr("", 1, 1);
	printf("%s",str);

}
*/
