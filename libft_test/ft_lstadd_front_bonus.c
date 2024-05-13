/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:06:51 by tsolanki          #+#    #+#             */
/*   Updated: 2024/05/06 21:52:17 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (!alst || !new)
		return ;
	new->next = *alst;
	*alst = new;
}

/*
** The ft_lstadd_front function adds a new element at the beginning of a linked
** list.
**
** Parameters:
** lst - A pointer to the pointer to the first element of the list.
** new - A pointer to the element to be added.
*/