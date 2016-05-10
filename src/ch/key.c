/*
** key.c for key in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May  9 16:29:52 2016 alies_a
** Last update Tue May 10 12:00:43 2016 alies_a
*/

#include <string.h>
#include <termios.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include "ch.h"

char up[] = {91, 65, 0};

int	ch_read_key()
{
  char	comb[KEY_MAX_SIZE];
  char	buff;
  int	r;

  comb[0] = '\0';
  while (strncmp(comb, up, strlen(comb)) == 0)
    {
      if ((r = read(STDIN_FILENO, &buff, 1)) != 1)
	return (CH_ESC);
      ch_stradd(comb, buff, KEY_MAX_SIZE);
      if (strcmp(comb, up) == 0)
	return (1337);
    }
  return (0);
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
