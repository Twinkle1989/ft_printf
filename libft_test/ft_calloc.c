/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:00:30 by tsolanki          #+#    #+#             */
/*   Updated: 2024/05/06 17:58:52 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t n)
{
	void	*ptr;
	size_t	i;

	i = count * n;
	if (count && n && ((UINT_MAX) / n < count))
		return (NULL);
	ptr = malloc(i);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, i);
	return (ptr);
}
