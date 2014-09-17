/*
** pile.h for pile in /home/loisel_k/travail/Librairie/listech/pile/src
** 
** Made by kevin loiseleur
** Login   <loisel_k@epitech.net>
** 
** Started on  Tue Nov  5 02:03:25 2013 kevin loiseleur
** Last update Tue Nov  5 12:25:57 2013 kevin loiseleur
*/

#ifndef PILE_H_
# define PILE_H_

typedef	struct			stack_elem
{
  char				*data;
  struct stack_elem		*next;
}				stack_elem;

typedef	struct			stack_ptr
{
  stack_elem			*begin;
  int				size;
}				stack_ptr;


int				my_strlent(char *str);
void				my_putst(char *str);
void				init_stack(stack_ptr *stack);
int				instack(stack_ptr *stack, char *data);
int				outstack(stack_ptr *stack);
void				disp_stack(stack_ptr *stack);

#endif /* PILE_H_ */
