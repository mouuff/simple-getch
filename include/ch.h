/*
** ch.h for ch in /home/alies_a/perso/simple-getch/include
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May  9 16:33:59 2016 alies_a
** Last update Mon May  9 17:10:35 2016 alies_a
*/

#ifndef CH_H_
# define CH_H_

# define CH_ESC ('\e')

int     ch_init();
int     ch_end();
int	ch_get();

char	*ch_stradd(char **str, char c);
int     ch_key();

#endif
