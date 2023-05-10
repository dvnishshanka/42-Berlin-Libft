/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnishsha <dnishsha@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:17:48 by dnishsha          #+#    #+#             */
/*   Updated: 2023/05/10 18:31:48 by dnishsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>
#include <stdlib.h>
/*
s: The string to be split.
c: The delimiter character.

Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.

The array of new strings resulting from the split.
NULL if the allocation fails.
*/
size_t	ft_strlen(const char *s)
{
	size_t	length;

	length = 0;
	while (s[length])
	{
		length++;
	}
	return (length);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	size_t			i;
	unsigned int	s_length;
	unsigned int	substr_length;

	i = 0;
	if (!s)
		return (0);
	s_length = ft_strlen(s);
	if (s_length <= start)
		substr_length = 0;
	else if ((start + len + 1) < s_length)
		substr_length = len;
	else
		substr_length = s_length - start;
	ptr = (char *)malloc(sizeof(char) * (substr_length + 1));
	if (!ptr)
		return (0);
	while (s[i] && i < substr_length)
	{
		ptr[i] = s[i + start];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

// Counts the no of array elements
static size_t	count_substr(char const *s, char sep)
{
	int	i;
	int	count;
	int	ref;

	i = 0;
	ref = -1;
	count = 0;
	while (s[i])
	{
		if (s[i] == sep && (ref == 1 || (i != 0)))
		{
			count ++;
			ref = 0;
			i++;
		}
		else
			ref = 1;
	}
	return (count);
}

// Seperate words inside
static char	**sep_words(char const *s, char sep, char **arr)
{
	int	i;
	int	prev;
	int	j;

	i = 0;
	j = 0;
	prev = -1;
	while (s[i])
	{
		if (s[i] == sep)
		{
			if ((prev + 1) < i)
			{
				arr[j] = ft_substr(s, prev, i - prev);
				j ++;
			}
			prev = i;
		}
		i++;

	}
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	no_elements;

	if (!s)
		return (0);
	no_elements = count_substr(s, c);
	printf("no_elements: %zu\n", count_substr(s, c));
	arr = (char **)malloc(sizeof(char) * (no_elements + 1));
	if (!arr)
		return (0);
	arr[no_elements + 1] = "\0";
	sep_words(s, c, arr);
	return (arr);
}
