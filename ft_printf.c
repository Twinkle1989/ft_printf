/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 21:05:02 by tsolanki          #+#    #+#             */
/*   Updated: 2024/05/13 12:36:00 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_format(va_list args, const char format)
{
	void	*ptr;

	if (format == 'c')
		return (ft_putchar((va_arg(args, int))));
	else if (format == 's')
		return (ft_putstr((va_arg(args, char *))));
	else if (format == 'd' || format == 'i')
		return (ft_putnbr((va_arg(args, int))));
	else if (format == 'X' || format == 'x')
		return (ft_puthexa(va_arg(args, unsigned int), format));
	else if (format == 'p')
	{
		ptr = va_arg(args, void *);
		if (ptr)
			return (ft_putaddress(ptr));
		return (ft_putstr("0x0"));
	}
	else if (format == 'u')
		return (ft_putunsigned(va_arg(args, unsigned int)));
	  else if (format == '%')
		return (ft_putchar('%'));
	else
		return (-1);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		length;

	i = 0;
	length = 0;
	va_start(args, str);
	while (*(str + i))
	{
		if (*(str + i) == '%' && ft_strchr("cspdiuxX%", *(str + i + 1)))
		{
			length += ft_format(args, *(str + i + 1));
			if (length == -1)
				return (-1);
			i++;
		}
		else
		{
			length += ft_putchar(*(str + i));
			if (length == -1)
				return (-1);
		}
		i++;
	}
	return (length);
}

/*
int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		length;
	int		result;

	i = 0;
	length = 0;
	va_start(args, str);
	while (*(str + i))
	{
		if (*(str + i) == '%' && ft_strchr("cspdiuxX%", *(str + i + 1)))
		{
			result = ft_format(args, *(str + i + 1));
			if (result == -1)
			{
				va_end(args);
				return (-1);
			}
			length += result;
			i++;
		}
		else
		{
			result = ft_putchar(*(str + i));
			if (result == -1)
			{
				va_end(args);
				return (-1);
			}
			length += result;
		}
		i++;
	}
	va_end(args);
	return (length);
}
*/