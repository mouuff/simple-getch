/*
** main.c for main in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May  9 15:34:12 2016 alies_a
** Last update Mon May  9 16:34:11 2016 alies_a
*/

#include <stdlib.h>
#include "ch.h"

int	main()
{
  int	key;

  key = -1;
  ch_init();
  while (key != 'a')
    {
      key = ch_get();
      if (key != -1)
	printf("%d\n", key);
    }
  ch_end();
  return (EXIT_SUCCESS);
}
