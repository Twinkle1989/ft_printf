/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:09:42 by tsolanki          #+#    #+#             */
/*   Updated: 2024/05/06 22:35:39 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*new_node;

	if (!new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	else
	{
		new_node = *lst;
		while (new_node->next != NULL)
			new_node = new_node->next;
	}
	new_node->next = new;
}

/*
** The ft_lstadd_back function adds a new element at the end of a linked list.
**
** Parameters:
** lst - A pointer to the pointer to the first element of the list.
** new - A pointer to the element to be added.
*/
