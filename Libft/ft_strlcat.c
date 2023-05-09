/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnishsha <dnishsha@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:14:46 by dnishsha          #+#    #+#             */
/*   Updated: 2023/05/09 10:06:09 by dnishsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	counter;
	size_t	j;

	i = 0;
	j = 0;
	counter = ft_strlen(src) + ft_strlen(dst);
	while (dst[j])
	{
		j ++;
	}
	while (src[i] && (i + j) < (size - 1))
	{
		dst[i + j] = src[i];
		i ++;
	}
	dst[i + j] = '\0';
	return (counter);
}
