/*
** back.c for back in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May 16 15:57:05 2016 alies_a
** Last update Tue May 17 13:41:00 2016 alies_a
*/

#include <string.h>
#include "rd.h"

int     rd_back(t_rd *rd, int key)
{
  int	curs;

  (void)key;
  //curs = rd->curs;
  rd_rm_char(rd->line, 0);
  rd_clear(rd);
  rd_putstr(rd, rd->line);
  rd->curs = strlen(rd->line);
  //curs -= 1;
  //rd_put(rd, '\b');
  //rd_disp(rd);
  /*
  while (rd->curs < curs - 1)
    rd_right(rd, key);
  */
  return (0);
}
