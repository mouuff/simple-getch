/*
** up.c for up in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May 16 15:55:45 2016 alies_a
** Last update Wed May 18 13:52:05 2016 alies_a
*/

#include <string.h>
#include "rd.h"

int     rd_up(t_rd *rd, int key)
{
  (void)key;
  rd_clear(rd, -1);

  RD_LINE = strdup("coucou");
  
  rd_putstr(rd, RD_LINE);
  rd->curs = strlen(RD_LINE);
  return (0);
}
