##
## Makefile for example in /home/alies_a/perso/simple-getch
## 
## Made by alies_a
## Login   <alies_a@epitech.net>
## 
## Started on  Mon May  9 15:35:25 2016 alies_a
## Last update Thu May 19 14:54:03 2016 alies_a
##

NAME	=	libgetch.a

CC	=	gcc

INC	=	./include/

RM	=	rm -f

SRC	=	./src/

CH	=	./src/ch/

RD	=	./src/rd/

HISTORY	=	./src/history/

CFLAGS	=	-I$(INC) \
		-Wall -Wextra -W

SRCS	=	$(CH)get.c \
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
		$(RD)rm_char.c \
		$(RD)disp.c \
		$(RD)free.c \
		$(HISTORY)history.c \
		$(HISTORY)down.c \
		$(HISTORY)up.c \

OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

clean:
		$(RM) $(OBJS)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY: all clean fclean re
