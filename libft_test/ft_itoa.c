/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 21:21:27 by tsolanki          #+#    #+#             */
/*   Updated: 2024/05/06 20:13:38 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	int_len(int n)
{
	size_t	len;
	long	nbr;

	len = 0;
	nbr = n;
	if (n <= 0)
		len = 1;
	if (nbr < 0)
		nbr = -nbr;
	while (nbr > 0)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	size_t	size;

	nbr = n;
	size = int_len(n);
	str = (char *)malloc(size + 1);
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (nbr < 0)
		nbr = -nbr;
	size--;
	if (nbr == 0)
		str[size] = '0';
	while (nbr > 0)
	{
		str[size--] = (nbr % 10) + '0';
		nbr = nbr / 10;
	}
	if (n < 0)
		str[0] = '-';
	if (n == 0)
		str[0] = '0';
	return (str);
}

/*
** The ft_itoa function converts an integer to a string representation.
**
** Parameters:
** n - The integer to be converted.
**
** Return:
** A dynamically allocated string representing the converted integer.
** NULL is returned if memory allocation fails.
*/