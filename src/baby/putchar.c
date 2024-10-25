/*
** EPITECH PROJECT, 2024
** putchar
** File description:
** put a char
*/
#include <unistd.h>

void baby_putchar(char c)
{
    write(1, &c, 1);
}
