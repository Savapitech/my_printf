/*
** EPITECH PROJECT, 2024
** baby_put_nbr
** File description:
** display a int
*/
#include "my.h"

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
