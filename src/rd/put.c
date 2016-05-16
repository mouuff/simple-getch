/*
** put.c for put in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Fri May 13 16:06:52 2016 alies_a
** Last update Mon May 16 16:43:33 2016 alies_a
*/

#include <unistd.h>
#include "rd.h"

void	rd_put(t_rd const *rd, char c)
{
  write(rd->fd, &c, 1);
}

void	rd_putstr(t_rd const *rd, char const *str)
{
  int	x;

  x = 0;
  while (str[x] != '\0')
    {
      rd_put(rd, str[x]);
      x += 1;
    }
}
