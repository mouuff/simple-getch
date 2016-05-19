/*
** up.c for up in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Thu May 19 12:55:02 2016 alies_a
** Last update Thu May 19 13:11:04 2016 alies_a
*/

#include "rd.h"

void	history_up(t_history *history)
{
  if (history->pos - 1 >= 0 &&
      (history->lines)[history->pos - 1] != NULL)
    history->pos -= 1;
}
