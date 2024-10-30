/*
** EPITECH PROJECT, 2024
** put_hex
** File description:
** display an int in hexadecimal format
*/

#include "my.h"

int baby_put_hex(size_t nb, flags_t *flags, int i)
{
    size_t result = (size_t)nb;
    char str[64];

    for (; nb != 0; i++) {
        result = nb % 16;
        if (result < 10)
            str[i] = (result + '0');
        else
            str[i] = (result + ('a' - 10));
        nb = nb / 16;
    }
    str[i] = '\0';
    baby_revstr(str);
    baby_strcpy(flags->spec_buff.str, str);
    flags->spec_buff.count = i;
    return i;
}

static
int baby_put_hex_upc(size_t nb, flags_t *flags, int i)
{
    size_t result = (size_t)nb;
    char str[64];

    for (; nb != 0; i++) {
        result = nb % 16;
        if (result < 10)
            str[i] = (result + '0');
        else
            str[i] = (result + ('A' - 10));
        nb = nb / 16;
    }
    str[i] = '\0';
    baby_revstr(str);
    baby_strcpy(flags->spec_buff.str, str);
    flags->spec_buff.count = i;
    return 0;
}

void printf_put_hex(flags_t *flags)
{
    size_t nb = (size_t)va_arg(flags->args, void *);

    if (flags->precision == 0 && nb == 0)
        return;
    if (nb == 0) {
        flags->spec_buff.str = "0";
        flags->spec_buff.count = 1;
        return;
    }
    if (isupper(flags->spec))
        baby_put_hex_upc(nb, flags, 0);
    else
        baby_put_hex(nb, flags, 0);
}
