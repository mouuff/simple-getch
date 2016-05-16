/*
** right.c for right in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May 16 15:57:53 2016 alies_a
** Last update Mon May 16 16:44:47 2016 alies_a
*/

#include "rd.h"

int     rd_right(t_rd *rd, int key)
{
  (void)key;
  if (rd->curs < strlen(rd->line))
    {
      rd_put(rd, (rd->line)[rd->curs]);
      rd->curs += 1;
      //rd_disp(rd);
    }
  return (0);
}
