##
## Makefile for example in /home/alies_a/perso/simple-getch
## 
## Made by alies_a
## Login   <alies_a@epitech.net>
## 
## Started on  Mon May  9 15:35:25 2016 alies_a
## Last update Wed May 24 18:47:16 2017 arnaud.alies
##

NAME	=	a.out

CC	=	gcc

CHINC	=	../../getch/include/

CH	=	../../getch/

RM	=	rm -f

SRC	=	./src/

LDFLAGS	=	-L$(CH) -lgetch

CFLAGS	=	-I$(CHINC) \
		-Wall -Wextra -W

SRCS	=	main.c

OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
		make -C $(CH)
		$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		make fclean -C $(CH)
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
