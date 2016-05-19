/*
** rd.c for rd in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Fri May 13 15:42:38 2016 alies_a
** Last update Fri May 13 16:04:27 2016 alies_a
*/

#include "rd.h"

static t_act actions[] = {
  {rd_left, K_LEFT},
  {rd_void, K_UNK},
  {NULL, 0}
};

t_action	rd_get_action(int key)
{
  register int	x;

  x = 0;
  while (actions[x].func != NULL)
    {
      if (key == actions[x].key)
	return (actions[x].func);
      x += 1;
    }
  return (rd_default);
}
