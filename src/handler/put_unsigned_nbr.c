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
    if (nb <= 1) {
        baby_putchar('-');
        nb *= -1;
    }
    if (nb < 10) {
        baby_putchar(nb + '0');
    } else {
        baby_put_unsigned_nbr(nb / 10);
        baby_putchar(nb % 10 +'0');
    }
    return 0;
}

int printf_put_unsigned_nbr(va_list args)
{
    return baby_put_unsigned_nbr(va_arg(args, int));
}
