/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 23:47:27 by tsolanki          #+#    #+#             */
/*   Updated: 2024/05/06 21:32:54 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
** The ft_striteri function applies a function to each character of a string,
** providing the index and a pointer to the character.
**
** Parameters:
** s - A pointer to the string to be iterated over.
** f - The function to be applied to each character.
** It takes an unsigned integer (the index) and a pointer to a character
** as parameters, and performs some operation on the character.
**
** Return:
** None
*/