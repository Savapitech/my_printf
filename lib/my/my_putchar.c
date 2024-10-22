/*
** EPITECH PROJECT, 2023
** CPoolDay07
** File description:
** ./my_putchar.c
*/



#include <unistd.h>

void my_putchar(char a)
{
    write(1, &a, 1);
}
