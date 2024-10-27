/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** display the number given as parameter
*/

#include "my.h"

static
int baby_put_nbr(int nb)
{
    int count = 0;

    if (nb < 0) {
        count += baby_putchar('-');
        nb *= -1;
    }
    if (nb < 10) {
        count += baby_putchar(nb + '0');
    } else {
        count += baby_put_nbr(nb / 10);
        count += baby_putchar(nb % 10 +'0');
    }
    return count;
}

int printf_put_nbr(flags_t *flags)
{
    return baby_put_nbr(va_arg(flags->args, int));
}
