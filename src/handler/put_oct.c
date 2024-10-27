/*
** EPITECH PROJECT, 2024
** put_oct
** File description:
** display an int given as parameter in octal format
*/
#include "my.h"

int baby_put_oct(int nb)
{
    int result = nb;
    int len = baby_intlen(nb, 8);
    char str[baby_intlen(nb, 8)];

    for (int i = 0; nb != 0; i++) {
        result = nb % 8;
        str[i] = (result + 48);
        nb /= 8;
    }
    str[len] = '\0';
    baby_revstr(str);
    baby_putstr(str);
    return len;
}

int printf_put_oct(flags_t *flags)
{
    return baby_put_oct(va_arg(flags->args, int));
}
