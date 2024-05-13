/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 18:20:47 by tsolanki          #+#    #+#             */
/*   Updated: 2024/05/06 22:47:06 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*new;

	if (!lst)
		return ;
	while (*lst)
	{
		new = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = new;
	}
	*lst = NULL;
}

/*
** The ft_lstclear function deletes all nodes from the 
** linked list and frees their memory
** and its elements while using a user-provided 
** function to free the content
** of each element.
**
** Parameters:
** lst - A pointer to the pointer to the first element of the list.
** del - A function pointer to the function used to free the content of each
** element.
*/