/*
** left.c for left in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Fri May 13 16:04:39 2016 alies_a
** Last update Mon May 16 14:30:11 2016 alies_a
*/

#include "rd.h"

int	rd_left(t_rd *rd, int key)
{
  (void)key;
  if (rd->curs > 0)
    {
      rd_put(rd, '\b');
      rd->curs -= 1;
    }
  return (0);
}
