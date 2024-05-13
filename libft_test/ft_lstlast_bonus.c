/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 14:50:52 by tsolanki          #+#    #+#             */
/*   Updated: 2024/05/06 22:24:31 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	current = lst;
	if (!lst)
		return (NULL);
	while (current->next != NULL)
		current = current->next;
	return (current);
}

/*
** The ft_lstlast function returns a pointer to the last element of a
** linked list.
**
** Parameters:
** lst - A pointer to the first element of the list.
**
** Return:
** A pointer to the last element of the list. If the list is empty
** (i.e., lst is NULL), the function returns NULL.
*/