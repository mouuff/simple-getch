/*
** main.c for main in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May  9 15:34:12 2016 alies_a
** Last update Tue May 10 12:02:02 2016 alies_a
*/

#include <stdlib.h>
#include "ch.h"

void	test()
{
  char test[KEY_MAX_SIZE];

  ch_stradd(test, 'a', KEY_MAX_SIZE);

  printf("%s\n", test);
}

int	main()
{
  int	key;

  test();
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
