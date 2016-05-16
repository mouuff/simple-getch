/*
** disp.c for rd disp in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May 16 15:31:04 2016 alies_a
** Last update Mon May 16 16:35:55 2016 alies_a
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

void	rd_disp(t_rd const *rd)
{
  int	pos;

  pos = rd->curs;
  while (pos++ < (int)strlen(rd->line))
    rd_put(rd, ' ');
  while (pos-- > 2)
    rd_putstr(rd, "\b \b");
  rd_putstr(rd, rd->line);
  pos = strlen(rd->line);
  while (pos > rd->curs)
    {
      rd_put(rd, '\b');
      pos -= 1;
    }
}
