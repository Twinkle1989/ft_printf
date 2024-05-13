/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 12:03:19 by tsolanki          #+#    #+#             */
/*   Updated: 2024/05/06 14:44:13 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest_byte;
	char	*src_byte;

	dest_byte = dest;
	src_byte = (char *)src;
	if (dest_byte > src_byte)
		while (n-- > 0)
			dest_byte[n] = src_byte[n];
	else if (dest_byte < src_byte)
		while (n--)
			*dest_byte++ = *src_byte++;
	return (dest);
}
