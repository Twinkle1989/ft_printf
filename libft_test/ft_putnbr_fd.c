/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 00:26:35 by tsolanki          #+#    #+#             */
/*   Updated: 2024/05/13 13:29:51 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_putnbr_recursive(int n, int fd)
{
	char	digit;
	int		result;

	if (n > 9)
	{
		result = ft_putnbr_recursive(n / 10, fd);
		if (result == -1)
			return (-1);
	}
	digit = (n % 10) + '0';
	if (write(fd, &digit, 1) == -1)
		return (-1);
	return (1);
}

int	ft_putnbr_fd(int n, int fd)
{
	int	result;

	if (n == -2147483648)
	{
		result = write(fd, "-2147483648", 11);
		if (result == -1)
			return (-1);
		else
			return (1);
	}
	if (n < 0)
	{
		result = write(fd, "-", 1);
		if (result == -1)
			return (-1);
		else
			return (ft_putnbr_recursive(-n, fd));
	}
	return (ft_putnbr_recursive(n, fd));
}

/*
int	ft_putnbr_fd(int n, int fd)
{
	int		result;
	char	digit;

	if (n == -2147483648)
	{
		result = write(fd, "-2147483648", 11);
		if (result == -1)
			return (-1);
	}
	else if (n < 0)
	{
		result = write(fd, "-", 1);
		if (result == -1)
			return (-1);
		return (ft_putnbr_fd(-n, fd));
	}
	else
	{
		if (n > 9)
		{
			result = ft_putnbr_fd(n / 10, fd);
			if (result == -1)
				return (-1);
			return (ft_putnbr_fd(n % 10, fd));
		}
		else
		{
			digit = n + '0';
			result = write(fd, &digit, 1);
			if (result == -1)
				return (-1);
		}
	}
	return (1);
}*/

/*
** The ft_putnbr_fd function writes an integer to a specified file descriptor.
**
** Parameters:
** n - The integer to be written.
** fd - The file descriptor where the integer will be written.
*/
