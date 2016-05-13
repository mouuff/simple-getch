/*
** rd.h for rd in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Fri May 13 11:51:08 2016 alies_a
** Last update Fri May 13 15:12:20 2016 alies_a
*/

#ifndef RD_H_
# define RD_H_

# define LINE_SIZE (256)

# include "ch.h"

typedef struct s_rd
{
  int	curs;
  int	line_size;
  char	*line;
} t_rd;

char	*rd_line(t_key const *keys);

#endif
