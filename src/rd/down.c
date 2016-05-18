/*
** down.c for down in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May 16 15:58:49 2016 alies_a
** Last update Wed May 18 14:28:18 2016 alies_a
*/

#include "rd.h"

int     rd_down(t_rd *rd, int key)
{
  (void)key;
  rd_clear(rd, -1);
  if (rd->history->pos + 1 < HISTORY_SIZE &&
      rd->history->lines[rd->history->pos + 1] != NULL)
    rd->history->pos += 1;
  rd_putstr(rd, RD_LINE);
  rd->curs = strlen(RD_LINE);
  return (0);
}
