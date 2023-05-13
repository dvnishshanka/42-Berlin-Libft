
#include "libft.h"

/*
content: The content to create the node with.
Return: None

Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with
the value of the parameter ’content’. The variable
’next’ is initialized to NULL.
*/

t_list  *ft_lstnew(void *content)
{
  t_list  *new_node;

  new_node = (t_list  *)malloc(sizeof(t_list));
  if (!new_node)
    return (0);
  new_node->content = content;
  new_node->next = 0;
  return (new_node);
}
