/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pola <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 21:10:35 by pola              #+#    #+#             */
/*   Updated: 2025/11/03 22:01:29 by wabin-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*head;

	if (lst == 0)
		return ;
	head = *lst;
	if ((*lst) == 0)
	{
		*lst = new;
		return ;
	}
	while (((*lst)->next) != 0)
		(*lst) = ((*lst)->next);
	((*lst)->next) = new;
	*lst = head;
}
