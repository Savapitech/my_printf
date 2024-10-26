/*
** EPITECH PROJECT, 2024
** put_hex
** File description:
** display an int in hexadecimal format
*/

#include "my.h"

int baby_put_hex(int nb)
{
    int result = nb;
    char str[baby_intlen(nb)];

    for (int i = 0; nb != 0; i++) {
        result = nb % 16;
        if (result < 10)
            str[i] = (result + 48);
        else
            str[i] = (result + 87);
        nb = nb / 16;
    }
    baby_revstr(str);
    baby_putstr(str);
    return (0);
}

int printf_put_hex(flags_t *flags)
{
    return baby_put_hex(va_arg(flags->args, int));
}
