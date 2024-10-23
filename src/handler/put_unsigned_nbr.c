/*
** EPITECH PROJECT, 2024
** put_unsigned_nbr
** File description:
** display an unsigned number given as parameter
*/
#include <unistd.h>
#include "../../include/printf.h"

static
void baby_putchar(char c)
{
    write(1, &c, 1);
}

static
int baby_put_unsigned_nbr(unsigned int nb)
{
    if (nb < 0) {
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