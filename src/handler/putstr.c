/*
** EPITECH PROJECT, 2024
** point_exa
** File description:
** display the adress in hexa
*/

#include <limits.h>

#include "my.h"

int printf_putstr(flags_t *flags)
{
    int count = 0;
    char *str = va_arg(flags->args, char *);

    if (str == NULL)
        return write(STDOUT_FILENO, "(null)", sizeof "(null)" - 1);
    if (str == NULL && flags->precision < sizeof "(null)" - 1)
        return write(STDOUT_FILENO, "", sizeof ""), 0;
    if (flags->precision == -1)
        flags->precision = INT_MAX;
    for (int i = 0; str[i] && i < flags->precision; i++)
        count += write(STDOUT_FILENO, &str[i], sizeof(char));
    return (count);
}
