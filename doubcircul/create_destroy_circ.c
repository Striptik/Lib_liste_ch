/*
** create_circ.c for create and delete circular list in /home/loisel_k/taff/C/Librairie/listech/doubcircul
** 
** Made by Kevin LOISELEUR
** Login   <loisel_k@epitech.net>
** 
** Started on  Thu Jan  9 17:38:13 2014 Kevin LOISELEUR
** Last update Wed Jan 15 12:22:31 2014 Kevin LOISELEUR
*/

#include <stdlib.h>
#include "circ.h"

t_circ		*create_circ(void)
{
  t_circ	*root;

  if (!(root = malloc(sizeof(*root))))
    {
      my_rprintf("Error Malloc ! (create_circ)\n");
      return (NULL);
    }
  root->prev = root;
  root->next = root;
  return (root);
}

void		del_circ(t_circ *root)
{
  t_circ	*current;
  t_circ	*next;

  current = root->next;
  while (current != root)
    {
      next = current->next;
      free(current);
      current = next; // a verifier
    }
  return ;
}

void		free_circ(t_circ **root)
{
  del_circ(*root);
  free (*root);
  *root = NULL;
  return ;
}
