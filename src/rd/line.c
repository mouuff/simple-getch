/*
** line.c for line in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Fri May 13 12:53:36 2016 alies_a
** Last update Tue May 17 14:22:59 2016 alies_a
*/

#include <string.h>
#include <stdlib.h>
#include "rd.h"

static int	rd_init(int fd, t_rd *rd)
{
  static t_line	*history = NULL;

  if ((rd->line = malloc(sizeof(char))) == NULL)
    return (1);
  (rd->line)[0] = '\0';
  rd->curs = 0;
  rd->fd = fd;
  rd->history = history;
  return (0);
}

static void	rd_ret(t_rd *rd)
{
  while (rd->curs < (int)strlen(rd->line))
    rd_right(rd, K_RIGHT);
  rd_put(rd, '\n');
}

char		*rd_line(int fd, t_key const *keys)
{
  t_rd		rd;
  int		key;

  if (rd_init(fd, &rd))
    return (NULL);
  ch_init();
  while ((key = ch_get(keys)) != '\n')
    {
      if (rd_key(&rd, key))
	{
	  ch_end();
	  return (NULL);
	}
    }
  rd_ret(&rd);
  ch_end();
  return (rd.line);
}
