/*
** EPITECH PROJECT, 2024
** put_hex
** File description:
** display an int in hexadecimal format
*/
#include <unistd.h>
#include "printf.h"

static
void baby_putchar(char c)
{
    write(1, &c, 1);
}

int baby_put_hex(int nb)
{
    int result = nb;

    while (nb != 0) {
        result = nb % 16;
        if (result < 10)
            baby_putchar(result + 48);
        else
            baby_putchar(result + 87);
        nb = nb / 16;
    }
    return (0);
}

int printf_put_hex(va_arg args)
{
    return baby_put_hex(va_list(args, int));
}
