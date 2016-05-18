/*
** right.c for right in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May 16 15:57:53 2016 alies_a
** Last update Wed May 18 13:51:39 2016 alies_a
*/

#include <string.h>
#include "rd.h"

int     rd_right(t_rd *rd, int key)
{
  (void)key;
  if (rd->curs < (int)strlen(RD_LINE))
    {
      rd_put(rd, (RD_LINE)[rd->curs]);
      rd->curs += 1;
    }
  return (0);
}
