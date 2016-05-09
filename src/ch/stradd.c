/*
** stradd.c for stradd in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May  9 17:05:23 2016 alies_a
** Last update Mon May  9 17:09:51 2016 alies_a
*/

#include <stdlib.h>
#include <string.h>

char	*ch_stradd(char **str, char c)
{
  char	*res;
  int	x;

  if ((res = malloc(sizeof(char) * (strlen(*str) + 2))) == NULL)
    return (NULL);
  x = 0;
  while ((*str)[x] != '\0')
    {
      res[x] = (*str)[x];
      x += 1;
    }
  res[x] = c;
  res[x + 1] = '\0';
  free(*str);
  *str = res;
  return (res);
}
