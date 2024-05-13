/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 19:46:37 by tsolanki          #+#    #+#             */
/*   Updated: 2024/05/06 15:47:16 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *str, int c)
{
	char	*str_ptr;
	int		len;

	str_ptr = (char *)str;
	len = ft_strlen(str);
	while (len >= 0)
	{
		if (str_ptr[len] == (char)c)
			return (&str_ptr[len]);
		len--;
	}
	return (NULL);
}
