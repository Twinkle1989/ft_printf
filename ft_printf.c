/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 21:05:02 by tsolanki          #+#    #+#             */
/*   Updated: 2024/05/31 14:09:31 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "stdio.h"

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

static void	ft_initialize(int *i, int *length, char **op)
{
	*i = 0;
	*length = 0;
	*op = "cspdiuxX%";
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		length;
	char	*op;
	int		res;

	ft_initialize(&i, &length, &op);
	va_start(args, str);
	while (*(str + i))
	{
		if (*(str + i) == '%' && ft_strchr(op, *(str + ++i)) && *(str + i))
			res = ft_format(args, *(str + i));
		else if (*(str + i))
			res = ft_putchar(*(str + i));
		if (res == -1)
		{
			va_end(args);
			return (-1);
		}
		length += res;
		if (*(str + i))
			i++;
	}
	va_end(args);
	return (length);
}

/*
int main(void)
{
	int len;

	len = ft_printf("Hello");
	printf("\nlen: %i\n", len);
}
*/