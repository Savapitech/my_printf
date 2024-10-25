/*
** EPITECH PROJECT, 2024
** put_hex
** File description:
** display an int in hexadecimal format
*/

#include "my.h"

static
int baby_put_nbr(int nb)
{
    if (nb < 0) {
        baby_putchar('-');
        nb *= -1;
    }
    if (nb < 10) {
        baby_putchar(nb + '0');
    } else {
        baby_put_nbr(nb / 10);
        baby_putchar(nb % 10 +'0');
    }
    return 0;
}

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

int printf_put_float(va_list args)
{
    int x = 0;
    float nb = va_arg(args, double);
    int entier = (int)nb;
    int precision = 6;
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
