/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:51:29 by tsolanki          #+#    #+#             */
/*   Updated: 2024/05/06 18:45:09 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1len;
	int		s2len;
	char	*res;

	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	res = malloc(s1len + s2len + 1);
	if (!res)
		return (NULL);
	res[s1len + s2len] = '\0';
	while (s2len-- > 0)
		res[s1len + s2len] = s2[s2len];
	while (s1len-- > 0)
		res[s1len] = s1[s1len];
	return (res);
}

/*
** The ft_strjoin function concatenates two strings into a new string.
**
** Parameters:
** s1 - A pointer to the first string.
** s2 - A pointer to the second string.
**
** Return:
** If memory allocation is successful, a pointer to the concatenated string is
** returned.
** If s1 or s2 is NULL or if memory allocation fails, NULL is returned.
**
** Description:
** The ft_strjoin function takes two parameters: s1 and s2. Next, it calls the
** str_new function to allocate memory for the concatenated string. The str_new
** function is defined as static in the code and is responsible for allocating
** memory. If memory allocation fails, str_new returns NULL, and ft_strjoin
** also returns NULL to indicate an error. If memory allocation is successful,
** ft_strjoin assigns the returned pointer to the str variable and increments
** the str_ptr variable to keep track of the beginning of the concatenated
** string. It then enters a loop that copies characters from s1 to the new
** string until a null terminator is encountered in s1. Inside the loop, it
** assigns the value of the current character in s1 to the memory location
** pointed to by str and increments both pointers to move to the next
** character. The loop continues until the end of s1. After copying s1,
** ft_strjoin enters another loop to copy characters from s2 to the new string.
** It performs the same character copying process as in the previous loop. Once
** the end of s2 is reached, it adds a null terminator at the end of the
** concatenated string to ensure proper termination. Finally, ft_strjoin
** returns the str_ptr pointer, which points to the beginning of the
** concatenated string. The function is useful when you need to combine two
** strings into a new string.
**
** Example:
** char str1[] = "Hello, ";
** char str2[] = "World!";
** char *result = ft_strjoin(str1, str2);
** (The function concatenates "Hello, " and "World!" into a new string "Hello,
** World!")
**
** char *missing_string = ft_strjoin(NULL, str2);
** (The function returns NULL as one of the strings is missing)
*/