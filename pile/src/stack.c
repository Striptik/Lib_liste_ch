/*
** stack.c for stack in /home/loisel_k/travail/Librairie/listech/pile/src
** 
** Made by kevin loiseleur
** Login   <loisel_k@epitech.net>
** 
** Started on  Tue Nov  5 02:54:31 2013 kevin loiseleur
** Last update Tue Nov  5 14:53:02 2013 kevin loiseleur
*/

#include <stdlib.h>
#include "stack.h"

void				init_stack(stack_ptr *stack)
{
  stack->begin = NULL;
  stack->size = 0;
}

int				instack(stack_ptr *stack, char *data)
{
  stack_elem			*new_elem;

  if ((new_elem = (stack_elem *) malloc(sizeof(stack_elem))) == NULL)
    return (-1);
  if ((new_elem->data = (char *) malloc(my_strlent(data) * sizeof(char))) == NULL)
    return (-1);
  new_elem->data = data;
  new_elem->next = stack->begin;
  stack->begin = new_elem;
  stack->size++;
  return (0);
}

int				outstack(stack_ptr *stack)
{
  stack_elem			*del_elem;

  if (stack->size == 0)
    return (-1);
  del_elem = stack->begin;
  stack->begin = stack->begin->next;
  //  free(del_elem->data);
  free(del_elem);
  stack->size--;
  return (0);
}

void				disp_stack(stack_ptr *stack)
{
  stack_elem			*current_elem;
  int				i;

  i = 0;
  current_elem = stack->begin;
  while (i < stack->size)
    {
      my_putst(current_elem->data);
      my_put('\n');
      current_elem = current_elem->next;
      i++;
    }
}
