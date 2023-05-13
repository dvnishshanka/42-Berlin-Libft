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

#include "libft.h"

/*
s: The string to be split.
c: The delimiter character.

Return: The array of new strings resulting from the split.
NULL if the allocation fails.

Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.
*/

// Counts the no of array elements
static size_t	count_substr(char const *s, char sep)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!s)
		return (0);
	while (s[i] && s[i] == sep)
		i++;
	while (s[i])
	{
		if (s[i] == sep && (i > 0 && s[i - 1] != sep))
    		{
			count ++;
		}
		else if (i == (ft_strlen(s) - 1) && s[i - 1] != sep)
			count ++;
		i++;
	}
	return (count);
}

static void	ft_free(char **strs, int j)
{
	while (j >= 0)
	{
		free(strs[j]);
		j --;
	}
	free(strs);
}

// Seperate words inside
static char	**sep_words(char const *s, char sep, char **arr, int size)
{
	size_t	i;
	size_t	prev;
	size_t	j;

	i = 0;
	j = 0;
	prev = 0;
	if (!s)
		return (0);
	while (s[i] && s[i] == sep)
	{
		prev = i;
		i++;
	}
	while (s[i])
	{
		if (s[i] == sep)
		{
			if ((prev != 0 || (s[prev] == sep && prev == 0)) && s[i - 1] != sep)
			{
				arr[j] = ft_substr(s, (prev + 1), i - (prev + 1));
				j++;
			}
			else if (prev == 0 && (s[0] != sep) && s[i - 1] != sep)
			{
				arr[j] = ft_substr(s, prev, i - prev);
				j++;
			}
			if (j > 0 && !arr[j - 1])
			{
				ft_free(arr, size);
				return (0);
			}
			prev = i;
		}
		else if (i == (ft_strlen(s) - 1) && (prev != (i - 1)))
		{
			if (prev != 0)
				arr[j] = ft_substr(s, (prev + 1), i - prev);
			else
				arr[j] = ft_substr(s, prev, i - prev + 1);
			if (!arr[j])
			{
				ft_free(arr, size);
				return (0);
			}
			j ++;
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
	arr = (char **)malloc(sizeof(char *) * (no_elements + 1));
	if (!arr)
		return (0);
	arr[no_elements] = 0;
	if (no_elements > 0)
		return (sep_words(s, c, arr, no_elements + 1));
	return (arr);
}
