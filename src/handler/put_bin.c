/*
** EPITECH PROJECT, 2024
** put_bin
** File description:
** display a int in his binary format
*/
#include "my.h"

int baby_put_bin(int nb)
{
    int result = nb;
    int len = baby_intlen(nb, 2);
    char str[baby_intlen(nb, 2)];

    if (nb == 0){
        baby_putchar('0');
        return 1;
    }
    for (int i = 0; nb != 0; i++) {
        result = nb % 2;
        str[i] = (result + 48);
        nb /= 2;
    }
    str[len] = '\0';
    baby_revstr(str);
    baby_putstr(str);
    return len;
}

int printf_put_bin(flags_t *flags)
{
    return baby_put_bin(va_arg(flags->args, int));
}
