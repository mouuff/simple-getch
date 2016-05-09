##
## Makefile for example in /home/alies_a/perso/simple-getch
## 
## Made by alies_a
## Login   <alies_a@epitech.net>
## 
## Started on  Mon May  9 15:35:25 2016 alies_a
## Last update Mon May  9 16:15:21 2016 alies_a
##

NAME	=	a.out

INC	=	./include/

RM	=	rm -f

SRC	=	./src/

CH	=	./src/ch/

CFLAGS	=	-I$(INC) \
		-Wall -Wextra -W -g

LDFLAGS	+=

SRCS	=	$(SRC)main.c \
		$(CH)ch.c \

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
