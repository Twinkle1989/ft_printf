/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 21:11:53 by tsolanki          #+#    #+#             */
/*   Updated: 2024/05/10 23:49:57 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char const *s)
{
	ssize_t	result;

	if (!s)
		result = write(1, "(null)", 6);
	else
		result = write(1, s, ft_strlen(s));
	if (result == -1)
		return (-1);
	else
		return ((int)result);
}
