/*
** add.c for hue in /home/arnaud.alies/perso/simple-getch/getch/src
** 
** Made by arnaud.alies
** Login   <arnaud.alies@epitech.eu>
** 
** Started on  Sun May 28 10:50:22 2017 arnaud.alies
** Last update Sun May 28 11:10:33 2017 arnaud.alies
*/

#include <stdlib.h>
#include <string.h>
#include "rd.h"

void	history_add(t_history *history, char *line)
{
  free((history->lines)[HISTORY_SIZE - 1]);
  memmove(history->lines + 1, history->lines, sizeof(char*) * (HISTORY_SIZE - 2));
  (history->lines)[0] = line;
}
