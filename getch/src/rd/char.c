/*
** char.c for char in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May 16 13:34:00 2016 alies_a
** Last update Tue May 17 13:45:34 2016 alies_a
*/

#include "rd.h"

int	rd_char(t_rd *rd, int key)
{
  if (rd_add_char(rd, (char)key))
    return (1);
  rd_disp(rd);
  rd_right(rd, K_RIGHT);
  return (0);
}
