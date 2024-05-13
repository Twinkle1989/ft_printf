/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:46:09 by tsolanki          #+#    #+#             */
/*   Updated: 2024/05/06 17:08:47 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void const *s1, const void *s2, size_t n)
{
	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;
	size_t			t;

	s1_ptr = (unsigned char *)s1;
	s2_ptr = (unsigned char *)s2;
	t = 0;
	while (t < n)
	{
		if (s1_ptr[t] != s2_ptr[t])
			return (s1_ptr[t] - s2_ptr[t]);
		t++;
	}
	return (0);
}
