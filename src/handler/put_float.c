/*
** EPITECH PROJECT, 2024
** put_hex
** File description:
** display an int in hexadecimal format
*/

#include "my.h"

void printf_put_float(flags_t *flags)
{
    double nbr = va_arg(flags->args, double);
    int copy = (int)nbr;
    int precision = flags->precision;
    int i = 0;

    if (precision == -1)
        precision = 6;
    if (nbr < 0 && copy == 0) {
        flags->spec_buff.str[i] = '-';
        i++;
    }
    i = baby_put_nbr(copy, flags, i);
    flags->spec_buff.str[i] = '.';
    i++;
    nbr -= copy;
    for (int j = 0; j < precision; j++) {
        nbr = (nbr - (int)nbr) * 10;
        i = baby_put_nbr((int)(nbr < 0 ? - nbr : nbr), flags, i);
    }
    flags->spec_buff.count = i;
}
