/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:06:27 by tsolanki          #+#    #+#             */
/*   Updated: 2024/05/06 15:40:05 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *str, int c)
{
	char	*str_ptr;
	char	chr;

	str_ptr = (char *)str;
	chr = c;
	while (*str_ptr)
	{
		if (*str_ptr == chr)
			return (str_ptr);
		str_ptr++;
	}
	if (*str_ptr != chr)
		return (NULL);
	return (str_ptr);
}
