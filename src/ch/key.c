/*
** key.c for key in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May  9 16:29:52 2016 alies_a
** Last update Mon May  9 16:49:58 2016 alies_a
*/

#include <termios.h>
#include <unistd.h>
#include <sys/ioctl.h>

char up[] = {91, 65};

int	ch_read_key()
{
  char	*comb;
  char	buff;

  read(STDIN_FILENO, &buff, 1);
  return (5);
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
