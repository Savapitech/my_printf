##
## EPITECH PROJECT, 2023
## miniprintf
## File description:
## ./Makefile
##

NAME	=	libmy.a

SRCS = $(wildcard src/*.c)
SRCS += $(wildcard src/handler/*.c)
SRCS += $(wildcard src/baby/*.c)

CC = gcc

all:  $(NAME)

$(NAME):	$(OBJS)
	$(CC) -Wall -Wextra -c $(SRCS) -Iinclude
	ar rc $(NAME) *.o

clean:
	$(RM) *.o

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

test: re
	gcc tests/*.c -L. -lmy -Iinclude -o test
