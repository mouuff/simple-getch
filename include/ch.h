/*
** ch.h for ch in /home/alies_a/perso/simple-getch/include
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May  9 16:33:59 2016 alies_a
** Last update Tue May 10 12:00:22 2016 alies_a
*/

#ifndef CH_H_
# define CH_H_

# define KEY_MAX_SIZE (16)

# define CH_ESC ('\e')

# include <stddef.h>

int     ch_init();
int     ch_end();
int	ch_get();

void	ch_stradd(char *str, char c, size_t max);
int     ch_key();

#endif
