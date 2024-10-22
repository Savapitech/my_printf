##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Makefile to build project
##

NAME	=	libmy.a

SRCS = $(wildcard lib/my/*.c)

OBJS	=	$(SRCS:.c=.o)

CC = gcc

CFLAGS = -c

all:  $(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -Iinclude
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) *.o
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all
