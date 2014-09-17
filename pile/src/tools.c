/*
** tools.c for tools.c in /home/loisel_k/travail/Librairie/listech/pile/src
** 
** Made by kevin loiseleur
** Login   <loisel_k@epitech.net>
** 
** Started on  Tue Nov  5 11:28:38 2013 kevin loiseleur
** Last update Tue Nov  5 11:36:28 2013 kevin loiseleur
*/

#include "stack.h"

int				my_strlent(char *str)
{
  int				i;

  i = 0;
  while (str && str[i])
    i++;
  return (i);
}

void				my_putst(char *str)
{
  write(1, str, my_strlent(str));
}
