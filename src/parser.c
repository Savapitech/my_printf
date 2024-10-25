/*
** EPITECH PROJECT, 2024
** point_exa
** File description:
** display the adress in hexa
*/

#include "my.h"

static
const handler_t HANDLERS[] = {
    { '%', &printf_putpercentage },
    { 'c', &printf_putchar },
    { 's', &printf_putstr },
    { 'd', &printf_put_nbr },
    { 'i', &printf_put_nbr },
    { 'u', &printf_put_unsigned_nbr },
    { 'x', &printf_put_hex },
    { 'X', &printf_put_hex },
    { 'o', &printf_put_oct },
    { 'p', &printf_put_pointer },
    { 'f', &printf_put_float },
    { '\0', NULL }
};

int args_parser(char *fmt, va_list args)
{
    fmt++;
    for (int i = 0; HANDLERS[i].ptr; i++)
        if (*fmt == HANDLERS[i].flag)
            return (HANDLERS[i].ptr(args));
    return (0);
}

int parser(char *fmt, va_list args)
{
    int count = 0;

    for (; *fmt != '\0'; fmt++) {
        if (*fmt != '%') {
            write(STDOUT_FILENO, &*fmt, sizeof(char));
            count++;
            continue;
        }
        count += args_parser(fmt, args);
        fmt++;
    }
    return count;
}
