/*
** getch.h for hue in /home/arnaud.alies/perso/simple-getch/getch
** 
** Made by arnaud.alies
** Login   <arnaud.alies@epitech.eu>
** 
** Started on  Wed May 24 18:52:17 2017 arnaud.alies
** Last update Wed May 24 18:56:04 2017 arnaud.alies
*/

#ifndef GETCH_H_
#define GETCH_H_

enum
  {
    K_ERR       = -1,
    K_CD        = 4,
    K_BACK      = 127,
    K_UNK       = 255,
    K_UP,
    K_DOWN,
    K_LEFT,
    K_RIGHT
  };


typedef struct s_key
{
  char *pat;
  int key;
} t_key;

/*
** Get key functions
*/

int     ch_init();
int     ch_get(t_key const *keys);
int     ch_end();

/*
** Get line functions
*/

const char      *rd_line(int fd, t_key const *keys);
void            rd_free();

#endif
