/*
** EPITECH PROJECT, 2024
** put_oct
** File description:
** display an int given as parameter in octal format
*/
#include "my.h"

int baby_put_oct(int nb)
{
    int result = nb;
    char str[baby_intlen(nb)];

    for (int i = 0; nb != 0; i++) {
        result = nb % 8;
        str[i] = (result + 48);
    }
    baby_revstr(str);
    baby_putstr(str);
    return (0);
}

int printf_put_oct(va_list args)
{
    return baby_put_oct(va_arg(args, int));
}
