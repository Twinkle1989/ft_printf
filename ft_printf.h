/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 21:03:16 by tsolanki          #+#    #+#             */
/*   Updated: 2024/05/10 22:14:12 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include "./libft_test/libft.h"

int	ft_printf(const char *str, ...);
int	ft_putchar(char c);
int	ft_putstr(const char *s);
int	ft_putnbr(int n);
int	ft_puthexa(unsigned long n, char format);
int	ft_putaddress(void *ptr);
int	ft_putunsigned(unsigned long n);

#endif