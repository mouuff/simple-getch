/*
** key.c for key in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May 16 13:21:15 2016 alies_a
** Last update Wed May 18 16:29:09 2016 alies_a
*/

#include "rd.h"

static t_act g_actions[] = {
  {rd_left, K_LEFT},
  {rd_right, K_RIGHT},
  {rd_up, K_UP},
  {rd_down, K_DOWN},
  {rd_back, K_BACK},
  {NULL, K_UNK}
};

int	rd_key(t_rd *rd, int key)
{
  int	x;

  x = 0;
  while (g_actions[x].func != NULL)
    {
      if (g_actions[x].key == key)
	return (g_actions[x].func(rd, key));
      x += 1;
    }
  if (key != K_UNK && key != K_ERR)
    return (rd_char(rd, key));
  return (0);
}
