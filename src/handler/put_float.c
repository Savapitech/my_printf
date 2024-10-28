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

void printf_put_float(flags_t *flags)
{
    double nbr = va_arg(flags->args, double);
    int copy = (int)nbr;
    int precision = choose_prec_neg(flags, nbr, copy);
    int i = 0;
    if (nbr == INFINITY){
        baby_put_inf(flags->spec);
        flags->spec_buff.count = 3;
        return;
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
 
