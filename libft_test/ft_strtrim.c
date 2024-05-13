/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 14:27:38 by tsolanki          #+#    #+#             */
/*   Updated: 2024/05/06 19:44:41 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	char	*str;
	int		len;

	if (!s1 || !set)
		return (NULL);
	str = (char *)s1;
	while (*str)
	{
		if (ft_strchr(set, *str) == NULL)
			break ;
		str++;
	}
	len = ft_strlen(str);
	while (len)
	{
		if (ft_strchr(set, str[len - 1]) == NULL)
			break ;
		len--;
	}
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	ft_strlcpy(res, str, len + 1);
	return (res);
}

/*
** The ft_strtrim function trims leading and trailing characters from a string
** based on a given set of characters.
**
** Parameters:
** s1 - A pointer to the string to be trimmed.
** set - A pointer to the set of characters to be trimmed.
**
** Return:
** If memory allocation is successful and the resulting trimmed string is not
** empty, a pointer to the trimmed string is returned.
** If s1 or set is NULL, or if memory allocation fails, or if the resulting
** trimmed string is empty, NULL is returned.
*/