/*
** disp.c for rd disp in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May 16 15:31:04 2016 alies_a
** Last update Wed May 18 13:53:06 2016 alies_a
*/

#include <string.h>
#include "rd.h"

void	rd_clear(t_rd *rd, int size)
{
  if (size == -1)
    size = (int)strlen(RD_LINE) + 1;
  while (rd->curs < size)
    {
      rd_put(rd, ' ');
      rd->curs += 1;
    }
  while (rd->curs > 0)
    {
      rd_putstr(rd, "\b \b");
      rd->curs -= 1;
    }
}

void		rd_disp(t_rd *rd)
{
  int		curs;

  curs = rd->curs;
  rd_clear(rd, -1);
  rd_putstr(rd, RD_LINE);
  rd->curs = strlen(RD_LINE);
  while (rd->curs > curs)
    rd_left(rd, K_LEFT);
}
