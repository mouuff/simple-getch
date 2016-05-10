/*
** stradd.c for stradd in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May  9 17:05:23 2016 alies_a
** Last update Tue May 10 11:57:36 2016 alies_a
*/

#include <stdlib.h>
#include <string.h>

void		ch_stradd(char *str, char c, size_t max)
{
  size_t	x;

  str[max - 1] = '\0';
  x = strlen(str);
  if (x < max - 1)
    {
      str[x] = c;
      str[x + 1] = '\0';
    }
}
