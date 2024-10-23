/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** display the number given as parameter
*/
#include<unistd.h>
#include "printf.h"

static void baby_putchar(char c)
{
    write(1, &c, 1);
}

int printf_put_nbr(int nb)
{
    if (nb < 0) {
        baby_putchar('-');
        nb *= -1;
    }
    if (nb < 10) {
        baby_putchar(nb + '0');
    } else {
        printf_put_nbr(nb / 10);
        baby_putchar(nb % 10 +'0');
    }
    return 0;
}
