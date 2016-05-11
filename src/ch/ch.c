/*
** ch.c for ch in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May  9 15:44:06 2016 alies_a
** Last update Wed May 11 14:32:30 2016 alies_a
*/

#include <termios.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <stdbool.h>

static struct termios old_term;
static bool set = false;

int	ch_init()
{
  struct termios term;

  if (set == true)
    return (1);
  if (ioctl(STDIN_FILENO, TCGETS, &term) == -1)
    return (1);
  old_term = term;
  set = true;
  term.c_lflag &= ~ECHO;
  term.c_lflag &= ~ICANON;
  term.c_cc[VMIN] = 0;
  term.c_cc[VTIME] = 1;
  if (ioctl(STDIN_FILENO, TCSETS, &term) == -1)
    return (1);
  return (0);
}

int	ch_end()
{
  if (set == false)
    return (1);
  if (ioctl(STDIN_FILENO, TCSETS, &old_term) == -1)
    return (1);
  set = false;
  return (0);
}
