/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 17:49:55 by tsolanki          #+#    #+#             */
/*   Updated: 2024/05/06 22:55:37 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	del(lst->content);
	free (lst);
}

/*
** The ft_lstdelone function deletes a 
** single node from the linked list
** using a user-provided function to free
** the content of that element.
**
** Parameters:
** lst - A pointer to the element to be deallocated.
** del - A function pointer to the function used to free the content
** of the element.
*/