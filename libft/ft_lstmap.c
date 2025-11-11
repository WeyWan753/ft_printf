/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pola <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 23:03:09 by pola              #+#    #+#             */
/*   Updated: 2025/11/03 21:44:05 by wabin-wa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	freeing(t_list *lst, void *new_content, void (*del)(void *))
{
	if (lst == 0)
	{
		del(new_content);
		return (0);
	}
	return (1);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*current;
	void	*new_content;

	if (lst == 0)
		return (0);
	new_content = f(lst->content);
	head = ft_lstnew(new_content);
	if (freeing(head, new_content, del) == 0)
		return (0);
	current = head;
	lst = lst -> next;
	while (lst != 0)
	{
		new_content = f(lst->content);
		current -> next = ft_lstnew(new_content);
		if (freeing(current->next, new_content, del) == 0)
		{
			ft_lstclear(&head, del);
			return (0);
		}
		current = current -> next;
		lst = lst -> next;
	}
	return (head);
}
