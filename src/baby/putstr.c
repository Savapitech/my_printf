/*
** EPITECH PROJECT, 2024
** putstr
** File description:
** put an str
*/
#include "printf.h"

void baby_putstr(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        baby_putchar(str[i]);
}
