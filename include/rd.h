/*
** rd.h for rd in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Fri May 13 11:51:08 2016 alies_a
** Last update Mon May 16 13:36:36 2016 alies_a
*/

#ifndef RD_H_
# define RD_H_

# include "ch.h"

typedef struct s_rd
{
  int	fd;
  int	curs;
  int	line_size;
  char	*line;
} t_rd;

typedef int(*t_action)(t_rd *rd, int key);

typedef struct s_act
{
  t_action func;
  int key;
} t_act;

char	*rd_line(int fd, t_key const *keys);

int	rd_key(t_rd *rd, int key);
void	rd_put(t_rd *rd, char c);

int	rd_char(t_rd *rd, int key);
int     rd_left(t_rd *rd, int key);

#endif
