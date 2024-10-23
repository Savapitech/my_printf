/*
** EPITECH PROJECT, 2024
** point_exa
** File description:
** display the adress in hexa
*/

#include "printf.h"

int printf_putchar(va_list args)
{
    int c = va_arg(args, int);

    return (write(STDOUT_FILENO, &c, sizeof(char)));
}
