/*
** back.c for back in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May 16 15:57:05 2016 alies_a
** Last update Wed May 18 13:52:19 2016 alies_a
*/

#include <string.h>
#include "rd.h"

int     rd_back(t_rd *rd, int key)
{
  (void)key;
  if (rd->curs > 0)
    {
      rd_rm_char(RD_LINE, rd->curs - 1);
      rd_left(rd, K_LEFT);
      rd_disp(rd);
    }
  return (0);
}
