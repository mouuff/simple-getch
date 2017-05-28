/*
** disp.c for rd disp in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May 16 15:31:04 2016 alies_a
** Last update Sun May 28 11:59:08 2017 arnaud.alies
*/

#include <string.h>
#include "rd.h"

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
