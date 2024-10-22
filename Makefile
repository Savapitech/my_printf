##
## EPITECH PROJECT, 2023
## miniprintf
## File description:
## ./Makefile
##

NAME	=	miniprintf

SRCS = main.c \
	   mini_printf.c \
	   my_format.c

CC = gcc

all:  $(NAME)

$(NAME):	$(OBJS)
	cd lib/my && make re
	$(CC) $(SRCS) -o $(NAME) -I include -L lib/my -lmy

clean:
	cd lib/my && make clean
	$(RM) *.o

fclean:	clean
	cd lib/my && make fclean
	$(RM) $(NAME)

re:	fclean all
