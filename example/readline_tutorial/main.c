/*
** main.c for main in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May  9 15:34:12 2016 alies_a
** Last update Wed May 24 19:08:52 2017 arnaud.alies
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "getch.h"

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

  while (42)
    {
      write(1, "$>", 2);
      line = rd_line(1, keys);
      if (line == NULL)
	return (EXIT_SUCCESS);
      printf("%s\n", line);
    }
  return (EXIT_SUCCESS);
}
