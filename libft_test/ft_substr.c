/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsolanki <tsolanki@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 20:34:17 by tsolanki          #+#    #+#             */
/*   Updated: 2024/05/06 18:11:01 by tsolanki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ts_strlen(char const *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	if (start >= ts_strlen(s))
		return (ft_strdup(""));
	if (len > ts_strlen(s) - start)
		len = ts_strlen(s) - start;
	str = (char *)malloc(sizeof(char) *(len + 1));
	if (!str)
		return (NULL);
	while (s[i + start] != '\0' && i < len)
	{
		str[i] = s[i + start];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
** The ft_substr function creates a substring from a given string.
**
** Parameters:
** s - A pointer to the source string.
** start - The starting index of the substring in the source string.
** len - The maximum length of the substring.
**
** Return:
** If memory allocation is successful or if len is zero, a pointer to the
** allocated substring is returned.
** If s is NULL or if memory allocation fails, NULL is returned.
**
** Description:
** The ft_substr function takes three parameters: s, start, and len. It first
** performs a check to ensure that s is not NULL. If s is NULL, it returns NULL
** to indicate an error. Next, it checks if the start index is greater than the
** length of the source string. If true, it means the start index is beyond the
** end of the source string, so it sets len to 0 to create an empty substring.
** Otherwise, it checks if the specified length exceeds the remaining
** characters in the source string after the start index. If true, it adjusts
** len to be equal to the number of characters remaining in the source string
** after the start index. The next step is to call the str_new function to
** allocate memory for the substring. The str_new function is defined as static
** in the code and is responsible for allocating memory. If memory allocation
** fails, str_new returns NULL, and ft_substr also returns NULL to indicate
** an error. If memory allocation is successful or if len is zero, ft_substr
** assigns the returned pointer to the str variable and increments the s
** pointer by the start index to position it at the start of the desired
** substring. It also assigns the str pointer to the str_ptr variable to keep
** track of the beginning of the substring. Then, it adds a null terminator at
** the end of the substring to ensure proper termination. Finally, ft_substr
** enters a loop that copies characters from the source string to the
** substring. It checks if len is not zero and if the current character in s is
** not a null terminator. Inside the loop, it assigns the value of the current
** character in s to the memory location pointed to by str and increments both
** pointers to move to the next character. It also decrements len to keep track
** of the remaining characters to be copied. This process continues until len
** becomes zero or until a null terminator is encountered. Once the loop ends,
** ft_substr returns the str_ptr pointer, which points to the beginning of the
** allocated substring. The function is useful when you need to extract a
** portion of a string to create a new substring.
**
** Example:
** char str[] = "Hello, World!";
** char *substring = ft_substr(str, 7, 5);
** (The function creates a substring "World" starting from index 7 of the
** source string)
**
** char *empty_substring = ft_substr(NULL, 0, 10);
** (The function returns NULL as the source string is NULL)
*/
