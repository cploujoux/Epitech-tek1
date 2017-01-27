/*
** list.h for LIST_H_ in /home/ploujo_c/rendu/Piscine_C_J12
** 
** Made by christophe ploujoux
** Login   <ploujo_c@epitech.net>
** 
** Started on  Tue Oct 21 11:10:38 2014 christophe ploujoux
** Last update Wed Oct 22 15:02:29 2014 christophe ploujoux
*/

#ifndef MYLIST_H_
# define MYLIST_H_

typedef struct	s_list
{
  void	*data;
  struct s_list	*next;
} t_list;

#endif /* MYLIST_H_ */
