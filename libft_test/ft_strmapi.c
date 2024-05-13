/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 23:01:43 by tsolanki          #+#    #+#             */
/*   Updated: 2024/05/06 20:29:28 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*dest;

	i = 0;
	dest = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	while (i < ft_strlen(s))
	{
		dest[i] = f(i, s[i]);
		i++;
	}
	dest[i] = 0;
	return (dest);
}

/*
** The ft_strmapi function applies a function to each character of a string,
** creating a new string with the results.
**
** Parameters:
** s - A pointer to the input string.
** f - The function to be applied to each character.
** It takes an unsigned integer (the index) and a character as parameters,
** and returns a new character based on the index and the input character.
**
** Return:
** A dynamically allocated string resulting from the application of the
** function to each character of the input string.
** NULL is returned if memory allocation fails or if the input string is NULL.
*/