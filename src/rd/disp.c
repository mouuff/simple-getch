/*
** disp.c for rd disp in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May 16 15:31:04 2016 alies_a
** Last update Tue May 17 13:43:59 2016 alies_a
*/

#include <string.h>
#include "rd.h"

void	rd_clear(t_rd *rd)
{
  while (rd->curs < (int)strlen(rd->line))
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
  static int	old_size = 0;
  int		curs;

  curs = rd->curs;
  rd_clear(rd);
  rd_putstr(rd, rd->line);
  rd->curs = strlen(rd->line);
  while (rd->curs > curs)
    rd_left(rd, K_LEFT);
}
