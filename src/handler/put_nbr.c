/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** display the number given as parameter
*/
#include "printf.h"

int printf_put_nbr(int nb)
{
    if (nb < 0) {
        write(1, '-', 1);
        nb *= -1;
    }
    if (nb < 10) {
        write(1, nb + '0', 1);
    } else {
        printf_put_nbr(nb / 10);
        write(1, nb % 10 +'0', 1);
    }
    return 0;
}
