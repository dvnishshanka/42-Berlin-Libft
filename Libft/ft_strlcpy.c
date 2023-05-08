/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnishsha <dnishsha@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:51:38 by dnishsha          #+#    #+#             */
/*   Updated: 2023/05/05 16:31:32 by dnishsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	counter;

	i = 0;
	counter = ft_strlen(src);
	while (src[i] && i < (size - 1))
	{
		dst[i] = src[i];
		i ++;
	}
	dst[i] = '\0';
	return (counter);
}
