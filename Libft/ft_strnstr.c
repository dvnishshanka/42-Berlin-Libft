/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnishsha <dnishsha@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:20:13 by dnishsha          #+#    #+#             */
/*   Updated: 2023/05/09 10:12:28 by dnishsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The strnstr() function locates the	first occurrence of the	null-terminated
string little in the string big, where not more than	len characters
are searched.  Characters that appear after a '\0'	character are not
searched.

RETURN VALUES
If	little is an empty string, big is returned; if little occurs nowhere
in	big, NULL is returned; otherwise a pointer to the first	character of
the first occurrence of little is returned. */

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] == little[j])
		{
			j = 0;
			while (little[j] && (i + j) < len)
			{
				if (big[i + j] != little[j])
					break ;
				if (j == ft_strlen(little) - 1)
					return ((char *)(&big[i]));
				j++;
			}
		}
		i++;
	}
	return (0);
}
