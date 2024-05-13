/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:00:30 by tsolanki          #+#    #+#             */
/*   Updated: 2024/04/22 14:44:59 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(void const *str, int c, size_t n)
{
	char	*str_ptr;
	char	chr;
	size_t	t;

	str_ptr = (char *)str;
	chr = (unsigned char)c;
	t = 0;
	while (t < n)
	{
		if (str_ptr[t] == chr)
			return (&str_ptr[t]);
		t++;
	}
	return (NULL);
}
