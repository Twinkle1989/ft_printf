/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 21:13:03 by tsolanki          #+#    #+#             */
/*   Updated: 2024/05/29 16:14:45 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long n, char format)
{
	const char	*base;
	int			result;
	int			total_written;

	total_written = 0;
	if (format == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
	{
		result = ft_puthexa(n / 16, format);
		if (result == -1)
			return (-1);
		total_written += result;
	}
	result = ft_putchar(base[n % 16]);
	if (result == -1)
		return (-1);
	total_written += result;
	return (total_written);
}
