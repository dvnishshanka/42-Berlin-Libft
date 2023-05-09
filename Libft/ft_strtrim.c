/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnishsha <dnishsha@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 09:59:17 by dnishsha          #+#    #+#             */
/*   Updated: 2023/05/09 10:18:20 by dnishsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
s1: The string to be trimmed.
set: The reference set of characters to trim.

Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in 'set' removed
from the beginning and the end of the string.

return:
The trimmed string.
NULL if the allocation fails.
*/

static int	is_in_set(char c, char const *set)
{
	unsigned int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i ++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*str;
	unsigned int	start;
	unsigned int	end;

	if (ft_strlen(s1) == 0)
		return (0);
	start = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && is_in_set(s1[start], set) == 1)
		start ++;
	while (s1[end] && is_in_set(s1[end], set) == 1)
		end --;
	str = ft_substr(s1, start, end + 1- start);
	if (!str)
		return (0);
	return (str);
}
