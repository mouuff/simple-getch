/*
** get.c for get in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May  9 16:18:41 2016 alies_a
** Last update Mon May 16 14:02:22 2016 alies_a
*/

#include <unistd.h>
#include "ch.h"

int		ch_get(t_key const *keys)
{
  char		buff;
  
  if (read(STDIN_FILENO, &buff, 1) != 1)
    return (K_ERR);
  if (buff == CH_ESC)
    return (ch_key(keys));
  return ((int)buff);
}
