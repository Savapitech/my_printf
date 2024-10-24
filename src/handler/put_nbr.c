/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** display the number given as parameter
*/

#include "my.h"

static void baby_putchar(char c)
{
    write(1, &c, 1);
}

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

int printf_put_nbr(va_list args)
{
    return baby_put_nbr(va_arg(args, int));
}
