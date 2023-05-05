/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnishsha <dnishsha@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:46:17 by dnishsha          #+#    #+#             */
/*   Updated: 2023/05/05 16:17:33 by dnishsha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <string.h>

static void	check_isalpha(void)
{
	if (ft_isalpha(65) == isalpha(65) && ft_isalpha(97) == isalpha(97)
		&& ft_isalpha(30) == isalpha(30))
		printf("ft_isalpha - OK\n");
	else
		printf("ft_isalpha - KO\n");
}

static void	check_isdigit(void)
{
	if (ft_isdigit(65) == isdigit(65) && ft_isdigit('9') == isdigit('9')
		&& ft_isdigit(0) == isdigit(0))
		printf("ft_isdigit - OK\n");
	else
		printf("ft_isdigit - KO\n");
}

static void	chk_strlen(void)
{
	char	*str;
	char	*s;

	str = "Hello";
	s = "";
	if (ft_strlen(str) == strlen(str) && ft_strlen(s) == strlen(s))
		printf("ft_strlen - OK\n");
	else
		printf("ft_strlen - KO\n");
}

static void	chk_strchr(void)
{
	char	*str;

	str = "Hello";
	if (ft_strchr(str, 'l') == strchr(str, 'l')
		&& ft_strchr(str, '\0') == strchr(str, '\0')
		&& ft_strchr(str, 'w') == strchr(str, 'w'))
		printf("ft_strchr - OK\n");
	else
		printf("ft_strchr - KO\n");
}

static void	chk_strrchr(void)
{
	char	*str;

	str = "Hellol";
	if (ft_strrchr(str, 'l') == strrchr(str, 'l')
		&& ft_strrchr(str, '\0') == strrchr(str, '\0')
		&& ft_strrchr(str, 'w') == strrchr(str, 'w'))
		printf("ft_strrchr - OK\n");
	else
		printf("ft_strrchr - KO\n");
}

static void	chk_strncmp(void)
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = "Hello";
	s2 = "Helrlo";
	s3 = "Hello";
	if (ft_strncmp(s1, s3, 6) == strncmp(s1, s3, 6)
		&& ft_strncmp(s1, s2, 4) == strncmp(s1, s2, 4)
		&& ft_strncmp(s1, s3, 7) == strncmp(s1, s3, 7)
		&& ft_strncmp(s1, s2, 2) == strncmp(s1, s2, 2))
		printf("ft_strncmp - OK\n");
	else
		printf("ft_strncmp - KO\n");
}

static void	chk_memset(void)
{
	char	s[] = "eeeee";
	char	s1[] = "eeeee";

	ft_memset(s + 1, 'a', 2);
	memset(s1 + 1, 'a', 2);
	if (ft_strncmp(s1, s, sizeof(s)) == strncmp(s, s1, sizeof(s)))
		printf("ft_memset - OK\n");
	else
		printf("ft_memset - KO\n");
}

void	chk_bzero(void)
{
	char	s[]= "hjds";
	char	s1[] = "hjds";

	ft_bzero(s, 2);
	bzero(s1, 2);
	printf("%s\n", s + 2);
	printf("%s\n", s1 + 2);
}

void	chk_memcpy(void)
{

	char	s[] = "AAAA";
	char	src[]= "hel";
	char	s1[] ="AAAA";

	printf("ft_memcpy: %p %s\n", ft_memcpy(s, src, 0), s);
	printf("memcpy: %p %s\n", memcpy(s1, src, 0), s1);
}

void	chk_memmove(void)
{
	char s[] = "AAAA";
	char src[]= "hi";
	char s1[] = "AAAA";

	printf("ft_memmove: %p %s\n", ft_memmove(s, src, 3), s);
	printf("memmove: %p %s\n", memmove(s1, src, 3), s1);
}

static void	chk_memchr(void)
{
	char	*str;

	str = "Hello";
	if (ft_memchr(str, 'l', 5) == memchr(str, 'l', 5)
		&& ft_memchr(str, '\0', 5) == memchr(str, '\0', 5)
		&& ft_memchr(str, 'w', 5) == memchr(str, 'w', 5))
		printf("ft_memchr - OK\n");
	else
		printf("ft_memchr - KO\n");
}

static void	chk_memcmp(void)
{
	char	*s1;
	char	*s2;
	char	*s3;
	char	*s4;
	char	*s5;

	s1 = "Hello";
	s2 = "Helrlo";
	s3 = "Hello";
	s4 = "hello";
	s5 = "help";
	if (ft_memcmp(s1, s3, 6) == memcmp(s1, s3, 6)
		&& ft_memcmp(s1, s2, 4) == memcmp(s1, s2, 4)
		&& ft_memcmp(s1, s3, 7) == memcmp(s1, s3, 7)
		&& ft_memcmp(s1, s2, 2) == memcmp(s1, s2, 2)
		&& ft_memcmp(s4, s5, 5) == memcmp(s4, s5, 5)
		&& ft_memcmp(s4, s5, 6) == memcmp(s4, s5, 6))
		printf("ft_memcmp - OK\n");
	else
		printf("ft_memcmp - KO\n");
}

// static void	check_strlcpy(void)
// {
// 	char	dst[4];
// 	char	*src = "Hel";
// 	char	dst1[4];

// 	printf("%ul %s / %d %s\n", ft_strlcpy(dst, src,600), dst, strlcpy(dst1, src, 600), dst1);

// }

int	main(void)
{
	check_isalpha();
	check_isdigit();
	chk_strlen();
	chk_strchr();
	chk_strrchr();
	chk_strncmp();
	chk_memset();
	chk_bzero();
	chk_memcpy();
	chk_memmove();
	chk_memchr();
	chk_memcmp();
	// check_strlcpy();
	return (0);
}
