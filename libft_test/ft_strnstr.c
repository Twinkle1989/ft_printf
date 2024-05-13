/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:07:06 by tsolanki          #+#    #+#             */
/*   Updated: 2024/05/06 17:18:47 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char const *haystack, char const *needle, size_t n)
{
	char	*hay;
	char	*nee;
	size_t	i;
	size_t	j;

	hay = (char *)haystack;
	nee = (char *)needle;
	if (nee[0] == '\0')
		return (hay);
	j = 0;
	while (hay[j] != '\0' && j < n)
	{
		i = 0;
		while (hay[j + i] == nee[i] && (j + i) < n)
		{
			if (nee[i + 1] == '\0')
				return (&hay[j]);
			i++;
		}
		j++;
	}
	return (NULL);
}
