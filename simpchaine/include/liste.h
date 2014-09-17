/*
** liste.h for header pour les listes in /home/loisel_k/travail/Librairie/liblistec
** 
** Made by loisel_k
** Login   <loisel_k@epitech.net>
** 
** Started on  Wed Oct 30 17:00:43 2013 loisel_k
** Last update Wed Oct 30 18:22:13 2013 loisel_k
*/

#ifndef LISTE_H_
# define LISTE_H_

typedef stuct		s_list
{
  void			*data;
  struct s_list		*next;
  struct s_list		*prev;

}t_list;

void			*put_elem_in_list(t_list *);


#endif /* LISTE_H_ */
