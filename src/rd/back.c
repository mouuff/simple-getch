/*
** back.c for back in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May 16 15:57:05 2016 alies_a
** Last update Mon May 16 17:26:49 2016 alies_a
*/

#include "rd.h"

int     rd_back(t_rd *rd, int key)
{
  int	curs;

  (void)key;
  curs = rd->curs;
  rd_clear(rd);
  rd_rm_char(rd->line, 0);
  //curs -= 2;
  rd_disp(rd);
  /*
  while (rd->curs < curs - 1)
    rd_right(rd, key);
  */
  return (0);
}
