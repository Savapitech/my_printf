/*
** EPITECH PROJECT, 2024
** put_hex
** File description:
** display an int in hexadecimal format
*/
#include <stdio.h>
#include "my.h"

static
void printf_put_float2(
    int *decimal,
    int x,
    int precision,
    int entier
)
{
    x += baby_put_nbr(entier);
    baby_putchar('.');
    x++;
    for (int i = 0; i < precision; i++)
        if (decimal[i] != 0)
            x += baby_put_nbr(decimal[i]);
}

int printf_put_float_sav(flags_t *flags)
{
    int x = 0;
    float nb = va_arg(flags->args, double);
    int entier = (int)nb;
    int precision = flags->precision;
    int decimal[precision];
    int b = 10;
    int tt;

    for (int i = 0; i < precision; i++) {
        tt = (int)(nb * b);
        decimal[i] = tt % 10;
        b = b * 10;
    }
    if (nb < 0) {
        baby_putchar('-');
        nb = nb * -1;
        entier = nb;
    }
    printf_put_float2(decimal, x, precision, entier);
    return (0);
}

int printf_put_float(flags_t *flags)
{
    double nbr = va_arg(flags->args, double);
    int copy = (int)nbr;
    int precision = flags->precision;

    if (precision == -1)
        precision = 6;
    if (nbr < 0)
        baby_putchar('-');
    baby_put_nbr(copy);
    baby_putchar('.');
    nbr -= copy;
    for (int i = 0; i < precision; i++)
        nbr*= 10;
    baby_put_nbr(nbr);
    return baby_intlen(copy, 10) + baby_intlen(nbr, 10) + 1;
}
