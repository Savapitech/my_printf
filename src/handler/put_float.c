/*
** EPITECH PROJECT, 2024
** put_hex
** File description:
** display an int in hexadecimal format
*/

#include "my.h"

int printf_put_float(flags_t *flags)
{
    float nbr = va_arg(flags->args, float);
    int copy = (int)nbr;

    baby_put_nbr(copy);
    baby_putchar('.');
    nbr -= (float)copy;
    for (int i = 0; i < 6; i++)
        nbr *= 10;
    copy = (int)nbr;
    baby_put_nbr(copy);
}
