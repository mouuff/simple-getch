##
## Makefile for example in /home/alies_a/perso/simple-getch
## 
## Made by alies_a
## Login   <alies_a@epitech.net>
## 
## Started on  Mon May  9 15:35:25 2016 alies_a
## Last update Mon May 16 15:58:33 2016 alies_a
##

NAME	=	a.out

CC	=	gcc

INC	=	./include/

RM	=	rm -f

SRC	=	./src/

CH	=	./src/ch/

RD	=	./src/rd/

CFLAGS	=	-I$(INC) \
		-Wall -Wextra -W

LDFLAGS	+=

SRCS	=	$(SRC)main.c \
		$(CH)get.c \
		$(CH)key.c \
		$(CH)ch.c \
		$(CH)stradd.c \
		$(RD)line.c \
		$(RD)char.c \
		$(RD)key.c \
		$(RD)left.c \
		$(RD)right.c \
		$(RD)up.c \
		$(RD)back.c \
		$(RD)down.c \
		$(RD)put.c \
		$(RD)add_char.c \
		$(RD)disp.c \

OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
		$(CC) $(OBJS) -o $(NAME) $(LDFLAGS)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
