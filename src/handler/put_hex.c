/*
** EPITECH PROJECT, 2024
** put_hex
** File description:
** display an int in hexadecimal format
*/
#include <stdint.h>
#include "my.h"
#include <stdio.h>

int baby_put_hex(size_t nb)
{
    size_t result = (size_t)nb;
    char str[baby_intlen(nb, 16)];
    int len = baby_intlen(nb, 16);

    for (int i = 0; nb != 0; i++) {
        result = nb % 16;
        if (result < 10)
            str[i] = (result + 48);
        else
            str[i] = (result + 87);
        nb = nb / 16;
    }
    str[len] = '\0';
    baby_revstr(str);
    baby_putstr(str);
    return (0);
}

int printf_put_hex(va_list args)
{
    return baby_put_hex((size_t)va_arg(args, void *));
}
