/*
** ch.h for ch in /home/alies_a/perso/simple-getch/include
** 
** Made by alies_a
** Login   <alies_a@epitech.net>
** 
** Started on  Mon May  9 16:33:59 2016 alies_a
** Last update Mon May 16 16:48:37 2016 alies_a
*/

#ifndef CH_H_
# define CH_H_

# define KEY_MAX_SIZE (16)

# define CH_ESC ('\e')

# include <stddef.h>

enum
  {
    K_ERR	= -1,
    K_BACK	= 127,
    K_UNK	= 255,
    K_UP,
    K_DOWN,
    K_LEFT,
    K_RIGHT
  };

typedef enum e_cmp
  {
    C_CONTAINS	= 0,
    C_EXACT
  } t_cmp;

typedef struct s_key
{
  char *pat;
  int key;
} t_key;

int     ch_init();
int	ch_get(t_key const *keys);
int     ch_end();

void	ch_stradd(char *str, char c, size_t max);
int     ch_key(t_key const *keys);

#endif
