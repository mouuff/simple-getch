/*
** main.c for main in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May  9 15:34:12 2016 alies_a
** Last update Mon May 16 14:20:54 2016 alies_a
*/

#include <stdlib.h>
#include "rd.h"

t_key keys[] = {
  {"[A", K_UP},
  {"[B", K_DOWN},
  {"[D", K_LEFT},
  {"[C", K_RIGHT},
  {NULL, K_UNK},
};

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	main()
{
  char	*line;

  line = rd_line(1, keys);
  /*  
  int	key;

  key = -1;
  ch_init();
  while (key != 'a')
    {
      key = ch_get(keys);
      if (key != -1)
	{
	  if (key == K_LEFT)
	    {
	      my_putchar('\b');
	      my_putchar(' ');
	      my_putchar('\b');
	    }
	  else
	    my_putchar(key);
        }
    }
  ch_end();
  */
  return (EXIT_SUCCESS);
}
