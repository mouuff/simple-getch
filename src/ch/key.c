/*
** key.c for key in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May  9 16:29:52 2016 alies_a
** Last update Mon May  9 17:45:04 2016 alies_a
*/

#include <string.h>
#include <termios.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include "ch.h"

char up[] = {91, 65, 0};

int	ch_read_key()
{
  char	*comb;
  char	buff;
  int	r;

  if ((comb = strdup("")) == NULL)
    return (-1);
  while (strncmp(comb, up, strlen(comb)) == 0)
    {
      if ((r = read(STDIN_FILENO, &buff, 1)) != 1)
	return (0);
      if (ch_stradd(&comb, buff) == NULL)
	return (-1);
      if (strcmp(comb, up) == 0)
	return (1337);
    }
  return (CH_ESC);
}

int			ch_key()
{
  struct termios	term;
  struct termios	old_term;
  int			res;

  if (ioctl(STDIN_FILENO, TCGETS, &term) == -1)
    return (-1);
  old_term = term;
  term.c_cc[VMIN] = 0;
  term.c_cc[VTIME] = 10;
  if (ioctl(STDIN_FILENO, TCSETS, &term) == -1)
    return (-1);
  res = ch_read_key();
  if (ioctl(STDIN_FILENO, TCSETS, &old_term) == -1)
    return (-1);
  return (res);
}
