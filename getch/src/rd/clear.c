/*
** clear.c for hue in /home/arnaud.alies/perso/simple-getch/getch/src/rd
** 
** Made by arnaud.alies
** Login   <arnaud.alies@epitech.eu>
** 
** Started on  Sun May 28 10:28:16 2017 arnaud.alies
** Last update Sun May 28 10:28:34 2017 arnaud.alies
*/

#include <string.h>
#include "rd.h"

void    rd_clear(t_rd *rd, int size)
{
  if (size == -1)
    size = (int)strlen(RD_LINE) + 1;
  while (rd->curs < size)
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
