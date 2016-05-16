/*
** char.c for char in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May 16 13:34:00 2016 alies_a
** Last update Mon May 16 15:41:26 2016 alies_a
*/

#include "rd.h"

int	rd_char(t_rd *rd, int key)
{
  if (rd_add_char(rd, (char)key))
    return (1);
  rd_disp(rd);
  return (0);
}
