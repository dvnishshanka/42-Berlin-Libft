
#include "libft.h"

/*
lst: The beginning of the list.
Return: The length of the list

Counts the number of nodes in a list.
*/

int ft_lstsize(t_list *lst)
{
  int len;

  len = 1;
  if (!lst)
    return (0);
  while(lst->next != 0)
  {
    len ++;
    lst = lst->next;
  }
  return (len);
}
