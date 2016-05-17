/*
** up.c for up in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May 16 15:55:45 2016 alies_a
** Last update Tue May 17 18:18:23 2016 alies_a
*/

#include <string.h>
#include "rd.h"

int     rd_up(t_rd *rd, int key)
{
  (void)key;
  rd_clear(rd, -1);

  rd->line = rd->history->lines[rd->history->pos];
  rd->history->pos += 1;
  
  rd_putstr(rd, rd->line);
  rd->curs = strlen(rd->line);
  return (0);
}
