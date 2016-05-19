/*
** down.c for down in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Thu May 19 12:51:44 2016 alies_a
** Last update Thu May 19 12:53:42 2016 alies_a
*/

#include "rd.h"

void	history_down(t_history *history)
{
  if (history->pos + 1 < HISTORY_SIZE &&
      history->lines[history->pos + 1] != NULL)
    history->pos += 1;
}
