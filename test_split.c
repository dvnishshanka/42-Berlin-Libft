/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnishsha <dnishsha@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:57:41 by dnishsha          #+#    #+#             */
/*   Updated: 2023/05/10 18:27:49 by dnishsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split(char const *s, char c);

int	main(void)
{
	char	**output;

	output = ft_split("hithere", 't');
	printf("%s", output[1]);
	while (*output)
	{
		printf("%s", *output);
		output++;
	}
	return (0);
}
