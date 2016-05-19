/*
** down.c for down in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May 16 15:58:49 2016 alies_a
** Last update Thu May 19 12:54:10 2016 alies_a
*/

#include <string.h>
#include "rd.h"

int     rd_down(t_rd *rd, int key)
{
  (void)key;
  rd_clear(rd, -1);
  history_down(rd->history);
  rd_putstr(rd, RD_LINE);
  rd->curs = strlen(RD_LINE);
  return (0);
}
