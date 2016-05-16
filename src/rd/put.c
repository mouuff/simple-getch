/*
** put.c for put in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Fri May 13 16:06:52 2016 alies_a
** Last update Mon May 16 13:36:51 2016 alies_a
*/

#include <unistd.h>
#include "rd.h"

void	rd_put(t_rd *rd, char c)
{
  write(rd->fd, &c, 1);
  rd->curs += 1;
}
