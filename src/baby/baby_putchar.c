/*
** EPITECH PROJECT, 2024
** putchar
** File description:
** put a char
*/

#include "my.h"

int baby_putchar(char c)
{
    return (write(STDOUT_FILENO, &c, sizeof c) == sizeof c)
        ? (int)(sizeof c) : EXIT_ERROR;
}
