/*
** EPITECH PROJECT, 2023
** Pool 3
** File description:
** exo 7
*/

#include "../../include/my.h"

int my_put_nbr(int nb)
{
    int i = 1;
    int count = 0;

    if (nb < 0) {
        my_putchar('-');
        count++;
        nb *= -1;
    }
    while ((nb / i) >= 10)
        i *= 10;
    while (i > 0) {
        my_putchar((nb / i) % 10 + '0');
        count++;
        i /= 10;
    }
    return (count);
}
