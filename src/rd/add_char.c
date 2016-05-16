/*
** add_char.c for rd add char in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May 16 15:22:20 2016 alies_a
** Last update Mon May 16 15:27:38 2016 alies_a
*/

#include <stdlib.h>
#include <string.h>
#include "rd.h"

static int	char_add_at(char **str, int x, char c)
{
  char		*res;

  if (x >= 0 && x > (int)strlen(*str))
    return (0);
  if ((res = malloc(sizeof(char) * (strlen(*str) + 2))) == NULL)
    return (1);
  strncpy(res, *str, x);
  res[x] = c;
  strcpy(res + x + 1, *str + x);
  free(*str);
  *str = res;
  return (0);
}

int	rd_add_char(t_rd *rd, char c)
{
  if (char_add_at(&(rd->line), rd->curs, c))
    return (1);
  rd->curs += 1;
  return (0);
}
