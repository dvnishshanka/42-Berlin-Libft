/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dnishsha <dnishsha@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 10:46:17 by dnishsha          #+#    #+#             */
/*   Updated: 2023/05/09 16:09:02 by dnishsha         ###   ########.fr       */
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
	char	src[] = "hel";
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
	if ((ft_memcmp(s1, s3, 6)  == 0 && memcmp(s1, s3, 6) == 0)
		&& (ft_memcmp(s1, s2, 4) < 0 && memcmp(s1, s2, 4) < 0)
		&& (ft_memcmp(s1, s2, 2) == 0 &&  memcmp(s1, s2, 2) == 0)
		&& (ft_memcmp(s4, s5, 3) == 0 &&  memcmp(s4, s5, 3) == 0)
		&& (ft_memcmp(s4, s5, 5) < 0 &&  memcmp(s4, s5, 5) < 0))
		printf("ft_memcmp - OK\n");
	else
		printf("ft_memcmp - KO\n");
}

static void	check_strlcpy(void)
{
	char	dst[4] = "111";
	char	*src = "Hello";
 	char	dst2[8] = "333";

	printf("ft_strlcpy(Hel): %lu %s\n", ft_strlcpy(dst, src, 4), dst);
	printf("ft_strlcat(8, 333Hell): %lu %s\n", ft_strlcat(dst2, src, 8), dst2);
}

static void	check_strnstr(void)
{
	char	*src = "Hello";

	printf("ft_strnstr(ello): %s\n", ft_strnstr(src, "el", 8));
	printf("ft_strnstr(null): %s\n", ft_strnstr(src, "el", 2));
	printf("ft_strnstr(Hello): %s\n", ft_strnstr(src, "", 4));
	printf("ft_strnstr(null): %s\n", ft_strnstr(src, "11", 4));
}

static void	chk_atoi(void)
{
	if ((ft_atoi("  -0") == atoi("  -0"))
		&& (ft_atoi("  -12346ty")   == atoi("  -12346ty"))
		&& (ft_atoi("   +2147483647") ==  atoi("   +2147483647"))
		&& (ft_atoi("   -2147483648") ==  atoi("   -2147483648")))
		printf("ft_atoi - OK\n");
	else
		printf("ft_atoi - KO\n");
}

static void	chk_strdup(void)
{
	char	*src = "Hello";

	printf("ft_strdup(Hello): %s\n", ft_strdup(src));
	printf("strdup(Hello): %s\n", strdup(src));
}

static void	chk_substr(void)
{
	char	*src = "Hello";
	char	*str = "01234";
	size_t	size = 10;

	printf("ft_substr(el): %s\n", ft_substr(src, 1, 2));
	printf("ft_substr(Hello): %s\n", ft_substr(src, 0, 7));
	printf("ft_substr(""): %s\n", ft_substr(str, 10, size));
}

static void	chk_strjoin(void)
{
	printf("ft_strjoin(Hello): %s\n", ft_strjoin("Hel","lo"));
	printf("ft_strjoin(there): %s\n", ft_strjoin("there", ""));
	printf("ft_strtrim(ello): %s\n", ft_strtrim("Hello","lH"));
	printf("ft_strtrim(null): %s\n", ft_strtrim("", "er"));
}

static void	chk_itoa(void)
{
	printf("ft_itoa(0): %s\n", ft_itoa(0));
	printf("ft_itoa(-2147483648): %s\n", ft_itoa(-2147483648));
	printf("ft_itoa(2147483647): %s\n", ft_itoa(2147483647));
	printf("ft_itoa(-5754): %s\n", ft_itoa(-5754));
	printf("ft_itoa(505): %s\n", ft_itoa(505));
}

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
	check_strlcpy();
	check_strnstr();
	chk_atoi();
	chk_strdup();
	chk_substr();
	chk_strjoin();
	chk_itoa();
	return (0);
}
