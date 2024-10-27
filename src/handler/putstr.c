/*
** EPITECH PROJECT, 2024
** point_exa
** File description:
** display the adress in hexa
*/

#include <limits.h>
#include <stdio.h>

#include "my.h"

static
const size_t NULL_LEN = sizeof "(null)" - 1;

int printf_putstr(flags_t *flags)
{
    int count = 0;
    char *str = va_arg(flags->args, char *);

    if (str == NULL && (size_t)flags->precision < NULL_LEN)
        return write(STDOUT_FILENO, "", sizeof ""), 0;
    if (str == NULL)
        return write(STDOUT_FILENO, "(null)", NULL_LEN);
    if (flags->precision == -1)
        flags->precision = INT_MAX;
    for (int i = 0; str[i] && i < flags->precision; i++)
        count += write(STDOUT_FILENO, &str[i], sizeof(char));
    return (count);
}
