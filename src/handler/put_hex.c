/*
** EPITECH PROJECT, 2024
** put_hex
** File description:
** display an int in hexadecimal format
*/

#include "my.h"

int baby_put_hex(size_t nb, flags_t *flags)
{
    size_t result = (size_t)nb;
    char str[baby_intlen(nb, 16)];
    int len = baby_intlen(nb, 16);

    for (int i = 0; nb != 0; i++) {
        result = nb % 16;
        if (result < 10)
            str[i] = (result + '0');
        else
            str[i] = (result + ('a' - 10));
        nb = nb / 16;
    }
    str[len] = '\0';
    baby_revstr(str);
    flags->spec_buff.str = str;
    return len;
}

static
int baby_put_hex_upc(size_t nb, flags_t *flags)
{
    size_t result = (size_t)nb;
    char str[baby_intlen(nb, 16)];
    int len = baby_intlen(nb, 16);

    for (int i = 0; nb != 0; i++) {
        result = nb % 16;
        if (result < 10)
            str[i] = (result + '0');
        else
            str[i] = (result + ('A' - 10));
        nb = nb / 16;
    }
    str[len] = '\0';
    baby_revstr(str);
    flags->spec_buff.str = str;
    return len;
}

void printf_put_hex_upc(flags_t *flags)
{
    size_t nb = (size_t)va_arg(flags->args, void *);

    if (nb == 0) {
        flags->spec_buff.str = "0";
        flags->spec_buff.count = 1;
        return;
    }
    baby_put_hex_upc(nb, flags);
}

void printf_put_hex(flags_t *flags)
{
    size_t nb = (size_t)va_arg(flags->args, void *);

    if (nb == 0) {
        flags->spec_buff.str = "0";
        flags->spec_buff.count = 1;
        return;
    }
    baby_put_hex(nb, flags);
}
