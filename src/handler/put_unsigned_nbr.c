/*
** EPITECH PROJECT, 2024
** put_unsigned_nbr
** File description:
** display an unsigned number given as parameter
*/

#include "my.h"

static
int baby_put_unsigned_nbr(unsigned int nb)
{
    unsigned int copy = nb;

    if (nb == 0) {
        baby_putchar('0');
        return 1;
    }
    if (copy < 10) {
        baby_putchar(copy + '0');
    } else {
        baby_put_unsigned_nbr(copy / 10);
        baby_putchar(copy % 10 +'0');
    }
    return baby_intlen(nb, 10);
}

int printf_put_unsigned_nbr(flags_t *flags)
{
    return baby_put_unsigned_nbr(va_arg(flags->args, int));
}
