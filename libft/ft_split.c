/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pola <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 12:28:19 by pola              #+#    #+#             */
/*   Updated: 2025/11/03 21:37:25 by wabin-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *str, char c)
{
	size_t	words_count;

	words_count = 0;
	if (str == 0)
		return (words_count);
	while (*str)
	{
		while (*str == c && *str)
			str++;
		if (*str != 0)
			words_count++;
		while (*str != c && *str)
			str++;
	}
	return (words_count);
}

static int	copy_word(char const **s, char c, char **arr_of_strs)
{
	size_t	letters_count;

	letters_count = 0;
	while (**s != c && **s)
	{
		(*s)++;
		letters_count++;
	}
	*arr_of_strs = malloc(letters_count + 1);
	if (*arr_of_strs == 0)
		return (-1);
	ft_strlcpy(*arr_of_strs, *s - letters_count, letters_count + 1);
	return (0);
}

static void	free_all(char **arr, size_t i)
{
	while (i > 0)
	{
		i--;
		free(arr[i]);
	}
	free(arr);
}

char	**ft_split(char const *s, char c)
{
	size_t	words_count;
	char	**arr_of_strs;
	size_t	i;

	words_count = count_words(s, c);
	arr_of_strs = (char **)malloc((words_count + 1) * sizeof(char *));
	if (s == 0 || arr_of_strs == 0)
		return (0);
	i = 0;
	while (i < words_count)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (copy_word(&s, c, &arr_of_strs[i]))
			{
				free_all(arr_of_strs, i);
				return (0);
			}
		}
		i++;
	}
	arr_of_strs[i] = 0;
	return (arr_of_strs);
}
/*
#include <stdio.h>

int main()
{
	char **str = ft_split(" what aaa ", ' ');
	char **str2 = str;
	while (*str)
	{
		printf("%s\n", *str);
		str++;
	}
	free_all(str2,2);
}
*/
