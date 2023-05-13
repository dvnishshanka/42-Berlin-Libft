
#include "libft.h"

/*
lst: The beginning of the list.
Return: Last node of the list.
*/

t_list *ft_lstlast(t_list *lst)
{
  if (!lst)
  return (0);
  while(lst->next != 0)
  {
    lst = lst->next;
  }
  return (lst);
}
