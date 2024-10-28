/*
** EPITECH PROJECT, 2024
** put_hex
** File description:
** display an int in hexadecimal format
*/

#include <math.h>

#include "my.h"

static
int choose_prec_neg(flags_t *flags, int nbr, int copy)
{
    if (flags->precision == -1)
        flags->precision = 6;
    if (nbr < 0 && copy == 0) {
        flags->prefix_buff.str[0] = '-';
        flags->prefix_buff.count = 1;
    }
    return flags->precision;
}

static
void inf_or_nan(double nbr, flags_t *flags)
{
    if (nbr < 0){
        flags->prefix_buff.str[0] = '-';
        flags->prefix_buff.count = 1;
    }
    if (isinf(nbr))
        baby_put_inf(flags);
    if (isnan(nbr))
        baby_put_nan(flags);
}

void printf_put_float(flags_t *flags)
{
    double nbr = va_arg(flags->args, double);
    int copy = (int)nbr;
    int precision = choose_prec_neg(flags, nbr, copy);
    int i = 0;

    if (isnan(nbr) || isinf(nbr))
        return inf_or_nan(nbr, flags);
    if (nbr < 0 && copy == 0) {
        flags->prefix_buff.str = "-";
        flags->prefix_buff.count = 1;
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
};
