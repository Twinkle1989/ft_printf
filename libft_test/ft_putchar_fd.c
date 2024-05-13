/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 00:09:53 by tsolanki          #+#    #+#             */
/*   Updated: 2024/05/10 22:28:38 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar_fd(char c, int fd)
{
	if (write (fd, &c, 1) == -1)
		return (-1);
	return (1);
}

/*
** The ft_putchar_fd function writes a character to a specified file
** descriptor.
**
** Parameters:
** c - The character to be written.
** fd - The file descriptor where the character will be written.
*/