/*
** history.c for history in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Thu May 19 12:42:53 2016 alies_a
** Last update Thu May 19 15:33:55 2016 alies_a
*/

#include <stdlib.h>
#include <string.h>
#include "rd.h"

static t_history      history;
static int            first = 1;

static void     history_move(t_history *history)
{
  int           x;

  x = 0;
  free((history->lines)[x]);
  while (x + 1 < HISTORY_SIZE)
    {
      (history->lines)[x] = (history->lines)[x + 1];
      x += 1;
    }
  (history->lines)[HISTORY_SIZE - 1] = NULL;
}

void    history_free()
{
  int	x;

  history.pos = 0;
  x = 0;
  if (first)
    return ;
  while (x < HISTORY_SIZE)
    {
      free((history.lines)[x]);
      (history.lines)[x] = 0;
      x += 1;
    }
}

void    history_init(t_rd *rd)
{
  if (first)
    {
      memset(&history, 0, sizeof(t_history));
      first = 0;
    }
  else
    {
      if (history.pos + 1 < HISTORY_SIZE)
	history.pos += 1;
      else
	history_move(&history);
    }
  rd->history = &history;
}
