/*
** ch.h for ch in /home/alies_a/perso/simple-getch/include
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May  9 16:33:59 2016 alies_a
** Last update Wed May 24 18:54:36 2017 arnaud.alies
*/

#ifndef CH_H_
# define CH_H_

# include <stddef.h>
# include "getch.h"

# define KEY_MAX_SIZE (16)
# define CH_ESC ('\e')

typedef enum e_cmp
  {
    C_CONTAINS	= 0,
    C_EXACT
  } t_cmp;

void	ch_stradd(char *str, char c, size_t max);
int     ch_key(t_key const *keys);

#endif
