/*
** EPITECH PROJECT, 2024
** put_oct
** File description:
** display an int given as parameter in octal format
*/
#include <unistd.h>

void baby_putchar(char c)
{
    write(1, &c, 1);
}

int baby_put_oct(int nb)
{
    int result = nb;

    while (nb != 0) {
        result = nb % 8;
        if (result < 10)
            baby_putchar(result + 48);
        else
            baby_putchar(result + 87);
        nb = nb / 8;
    }
    return (0);
}

int printf_put_oct(va_list args)
{
    return baby_put_oct(va_list(arg, int));
}
