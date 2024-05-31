/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 21:10:40 by tsolanki          #+#    #+#             */
/*   Updated: 2024/05/30 20:03:18 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	rec_print(unsigned long n, const char *base)
{
	int	len;
	int	res;

	len = 0;
	if (n > (ft_strlen(base) - 1))
	{
		res = rec_print(n / ft_strlen(base), base);
		if (res == -1)
			return (-1);
		len += res;
	}
	res = ft_putchar(*(base + (n % ft_strlen(base))));
	if (res == -1)
		return (-1);
	len += res;
	return (len);
}

int	ft_putaddress(void *format)
{
	unsigned long	n;
	const char		*base;
	int				len;
	int				res;

	n = (unsigned long)format;
	base = "0123456789abcdef";
	len = ft_putstr("0x");
	if (len == -1)
		return (-1);
	res = rec_print(n, base);
	if (res == -1)
		return (-1);
	return (len + res);
}
