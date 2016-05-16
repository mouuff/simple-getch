/*
** key.c for key in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May  9 16:29:52 2016 alies_a
** Last update Mon May 16 14:25:36 2016 alies_a
*/

#include <string.h>
#include <termios.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include "ch.h"

static int	key_cmp(t_key const *keys,
			char const *comb,
			t_cmp cmp)
{
  size_t	x;

  x = 0;
  while (keys[x].pat != NULL)
    {
      if (cmp == C_EXACT)
	{
	  if (strcmp(keys[x].pat, comb) == 0)
	    return (keys[x].key);
	}
      else
	{
	  if (strncmp(keys[x].pat, comb, strlen(comb)) == 0)
	    return (keys[x].key);
	}
      x += 1;
    }
  return (0);
}

static int	read_key(t_key const *keys)
{
  char		comb[KEY_MAX_SIZE];
  char		buff;
  int		r;
  int		res;

  comb[0] = '\0';
  while (key_cmp(keys, comb, C_CONTAINS) != 0)
    {
      if ((r = read(STDIN_FILENO, &buff, 1)) != 1)
	return (CH_ESC);
      ch_stradd(comb, buff, KEY_MAX_SIZE);
      if ((res = key_cmp(keys, comb, C_EXACT)) != 0)
	return (res);
    }
  return (K_UNK);
}

int			ch_key(t_key const *keys)
{
  struct termios	term;
  struct termios	old_term;
  int			res;

  if (ioctl(STDIN_FILENO, TCGETS, &term) == -1)
    return (K_ERR);
  old_term = term;
  term.c_cc[VMIN] = 0;
  term.c_cc[VTIME] = 10;
  if (ioctl(STDIN_FILENO, TCSETS, &term) == -1)
    return (K_ERR);
  res = read_key(keys);
  if (ioctl(STDIN_FILENO, TCSETS, &old_term) == -1)
    return (K_ERR);
  return (res);
}
