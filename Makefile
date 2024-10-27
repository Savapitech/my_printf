##
## EPITECH PROJECT, 2023
## miniprintf
## File description:
## ./Makefile
##

NAME := libmy.a

SRC := $(wildcard src/*.c)
SRC += $(wildcard src/handler/*.c)
SRC += $(wildcard src/baby/*.c)

BUILD_DIR := .build

TEST_SRC := tests/main.c
TEST_OBJ := $(TEST_SRC:%.c=$(BUILD_DIR)/%.o)

OBJ := $(SRC:%.c=$(BUILD_DIR)/%.o)

CC := gcc

CFLAGS += -Wall -Wextra -g3
CFLAGS += -iquote ./include
CFLAGS += -Wno-unused-parameter

LDFLAGS += -L .
LDLIBS := -lmy


oui: $(NAME)

$(BUILD_DIR)/%.o: %.c
	@ mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -o $@ -c $<

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean:
	$(RM) -r $(NAME) $(BUILD_DIR)

.NOTPARALLEL: re
re:	fclean oui

test: $(NAME) $(TEST_OBJ)
	$(CC) $(CFLAGS) -o $@ $(TEST_OBJ) $(LDFLAGS) $(LDLIBS)

tests_run: test
	./$<

.PHONY: all clean fclean re test tests_run
