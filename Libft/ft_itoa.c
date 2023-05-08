
#include "libft.h"

/*
n: the integer to convert.
The string representing the integer. NULL if the allocation fails.

Allocates (with malloc(3)) and returns a string representing the integer received as an argument.
Negative numbers must be handled.
*/
static unsigned int ft_num_digit(long int n)
{
  unsigned int len; // length of the number string

  len = 0;
  if (n < 0)
  {
    n = -n;
    len++;
  }
  while (n >= 10)
  {
    n = n % 10;
    len ++;
  }
  return (len + 1);
}

#include <stdio.h>
char *ft_itoa(int n)
{
  char *num_str;
  long int  i;
  unsigned int  num_digits;

  num_digits = ft_num_digit((long int)n);
  i = num_digits - 1;
  printf("%u\n", num_digits);
  num_str = (char *)malloc(num_digits + 1);
  if (!num_str)
    return (0);
  if (n < 0)
  {
    num_str[0] = '-';
    n = -n;
  }
  if (n == 0)
    num_str[0] = '0';
  num_str[num_digits] = '\0';
  while(n > 0 && i >= 0)
  {
    num_str[i--] = (n % 10) + '0';
    printf("%d\n", n);
    n = (n / 10);

  }
  return(num_str);
}
