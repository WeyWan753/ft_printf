/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pola <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 21:47:38 by pola              #+#    #+#             */
/*   Updated: 2025/11/03 22:15:10 by wabin-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;

	if (lst == 0)
		return ;
	current = *lst;
	while (*lst != 0)
	{
		*lst = ((*lst)->next);
		del(current -> content);
		free(current);
		current = *lst;
	}
}
