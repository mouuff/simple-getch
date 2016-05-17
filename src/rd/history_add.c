/*
** history_add.c for history add in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Tue May 17 17:21:08 2016 alies_a
** Last update Tue May 17 18:17:40 2016 alies_a
*/

#include "rd.h"

static int	get_null(t_history const *history)
{
  int		x;

  x = HISTORY_SIZE - 1;
  while (x >= 0)
    {
      if ((history->lines)[x] == NULL)
	return (x);
      x -= 1;
    }
  return (0);
}

void	rd_history_add(char *line,
		       t_history *history)
{
  int	pos;

  pos  = get_null(history);
  if (pos > 0)
    {
      (history->lines)[pos] = line;
      history->pos = pos;
    }
}
