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
#include <string.h>
#include <stdlib.h>

char	**ft_split(char const *s, char c);

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
	else if ((start + len) < s_length)
		substr_length = len;
	else
		substr_length = s_length - start;
	ptr = (char *)malloc(sizeof(char) * (substr_length + 1));
	if (!ptr)
		return (0);
	while (s[i] && i < substr_length)
	{
		ptr[i] = s[i + start];
    printf("len, strat,  i + start, s[i + start]: %u, %u %zu %c\n",substr_length,start, i + start, s[i + start]);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

int	main(void)
{
	char	**output1;
  	// char	**output2;
    // char	**output3;
  	char	**expected1 = (char*[6]){"split", "this", "for", "me", "!", NULL};
    // char	**expected2 = (char*[6]){"split  ", "this", "for", "me", "!", NULL};
    int i =0;

  output1 = ft_split("      split       this for   me  !       ", ' ');
  // output2 = ft_split( "split  ||this|for|me|||||!|", '|');
  // output3 = ft_split( "\0aa\0bbb", '\0');
  while (output1[i])
	{
    if (strcmp(output1[i], expected1[i]) != 0)
    {
      	printf("_test fail%s_\n", output1[i]);
    }
		printf("_%s_\n", output1[i]);
		i++;
	}
  // printf("comparison %i_\n", strcmp(*output2, *expected2));
	// while (**output3)
	// {
	// 	printf("_%s_\n", *output3);
	// 	output3++;
	// }
	return (0);
}
