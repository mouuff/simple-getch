/*
** main.c for main in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May  9 15:34:12 2016 alies_a
** Last update Wed May 11 15:37:16 2016 alies_a
*/

#include <stdlib.h>
#include "ch.h"

t_key keys[] = {
  {"[A", K_UP},
  {"[B", K_DOWN},
  {"[D", K_LEFT},
  {"[C", K_RIGHT},
  {NULL, K_UNK},
};

void	test()
{
  char test[KEY_MAX_SIZE];

  test[0] = '\0';
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
      key = ch_get(keys);
      if (key != -1)
	printf("%d\n", key);
    }
  ch_end();
  return (EXIT_SUCCESS);
}
