/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 20:25:06 by tsolanki          #+#    #+#             */
/*   Updated: 2024/04/22 21:16:00 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	d_size;
	size_t	s_size;

	d_size = ft_strlen(dest);
	s_size = ft_strlen(src);
	if (n <= d_size)
		return (n + s_size);
	i = d_size;
	j = 0;
	while ((i + j) < (n - 1) && src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (d_size + s_size);
}
