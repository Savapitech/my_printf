/*
** EPITECH PROJECT, 2024
** point_exa
** File description:
** display the adress in hexa
*/

#include "printf.h"

int printf_putpercentage(va_list args)
{
    int c = '%';

    (void)args;
    return (write(STDOUT_FILENO, &c, sizeof(char)));
}
