/*
** rd.h for rd in /home/alies_a/perso/simple-getch
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Fri May 13 11:51:08 2016 alies_a
** Last update Fri May 13 11:54:35 2016 alies_a
*/

#ifndef RD_H_
# define RD_H_

typedef struct s_rd
{
  int	curs;
  int	line_size;
  char	*line;
} t_rd;

char	*rd_line();

#endif
