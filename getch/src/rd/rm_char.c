/*
** rm_char.c for rm char in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May 16 17:08:41 2016 alies_a
** Last update Mon May 16 17:11:17 2016 alies_a
*/

#include <string.h>

void    rd_rm_char(char *str, int pos)
{
  int   len;
  int   x;
  int   decal;

  len = strlen(str);
  x = 0;
  decal = 0;
  while (x < len)
    {
      if (x == pos)
	decal = 1;
      str[x] = str[x + decal];
      x += 1;
    }
}
