/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 21:13:38 by tsolanki          #+#    #+#             */
/*   Updated: 2024/05/30 20:21:30 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunsigned(unsigned long n)
{
	int				len;
	char			*base;
	unsigned int	base_length;
	char			digit;
	int				res;

	len = 0;
	base = "0123456789";
	base_length = ft_strlen(base);
	if (n >= base_length)
	{
		res = ft_putunsigned(n / base_length);
		if (res == -1)
			return (-1);
		len += res;
	}
	digit = base[n % base_length];
	if (ft_putchar(digit) == -1)
		return (-1);
	len += 1;
	return (len);
}
