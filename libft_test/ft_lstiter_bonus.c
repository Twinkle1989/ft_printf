/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 21:17:28 by tsolanki          #+#    #+#             */
/*   Updated: 2024/05/06 22:48:33 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*current;

	current = lst;
	if (!lst)
		return ;
	while (current != NULL)
	{
		f(current->content);
		current = current->next;
	}
}

/*
** The ft_lstiter function applies a 
** given function to each element
** of a linked list.
**
** Parameters:
** lst - A pointer to the first element of the list.
** f - A function pointer to the function to be applied to each element's
** content.
*/