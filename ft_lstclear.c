
#include "libft.h"

/*
lst: The address of a pointer to a node.
del: The address of the function used to delete
the content of the node.
Return: None

Deletes and frees the given node and every
successor of that node, using the function ’del’
and free(3).
Finally, the pointer to the list must be set to
NULL.
*/

void ft_lstclear(t_list **lst, void (*del)(void*))
{
  t_list *temp;

  if (!del || !lst)
    return ;
  while ((**lst).next != 0)
  {
    temp = (*lst)->next;
    ft_lstdelone(*lst, del);
    *lst = temp;
  }
   ft_lstdelone(*lst, del);
  *lst = 0;
}
