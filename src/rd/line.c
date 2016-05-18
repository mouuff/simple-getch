/*
** line.c for line in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Fri May 13 12:53:36 2016 alies_a
** Last update Wed May 18 14:13:56 2016 alies_a
*/

#include <string.h>
#include <stdlib.h>
#include "rd.h"

static void		rd_history_init(t_rd *rd)
{
  static t_history	history;
  static int		first = 1;

  if (first)
    {
      memset(&history, 0, sizeof(t_history));
      first = 0;
    }
  else
    {
      if (history.pos + 1 < HISTORY_SIZE)
	history.pos += 1;
    }
  rd->history = &history;
}

static int	rd_init(int fd, t_rd *rd)
{
  rd_history_init(rd);
  free(RD_LINE);
  if ((RD_LINE = malloc(sizeof(char))) == NULL)
    return (1);
  (RD_LINE)[0] = '\0';
  rd->curs = 0;
  rd->fd = fd;
  return (0);
}

static void	rd_ret(t_rd *rd)
{
  while (rd->curs < (int)strlen(RD_LINE))
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
  while ((key = ch_get(keys)) != '\n' && key != K_CD)
    {
      if (rd_key(&rd, key))
	{
	  ch_end();
	  return (NULL);
	}
    }
  rd_ret(&rd);
  ch_end();
  return ((rd.history->lines)[rd.history->pos]);
}
