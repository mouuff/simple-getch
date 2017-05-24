/*
** main.c for main in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May  9 15:34:12 2016 alies_a
** Last update Wed May 24 18:49:50 2017 arnaud.alies
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "ch.h"

t_key keys[] = {
  {"[A", K_UP},
  {"[B", K_DOWN},
  {"[D", K_LEFT},
  {"[C", K_RIGHT},
  {NULL, K_UNK},
};

int		main()
{
  const char	*line;
  int		key;

  ch_init();
  while ((key = ch_get(keys)) != K_BACK)
    {
      printf("%d\n", key);
    }
  ch_end();
  return (EXIT_SUCCESS);
}
