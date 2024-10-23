/*
** EPITECH PROJECT, 2024
** point_exa
** File description:
** display the adress in hexa
*/

#include "printf.h"

static
const handler_t HANDLERS[] = {
    { '%', &printf_putpercentage },
    { 'c', &printf_putchar },
    { 's', &printf_putstr },
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
        args_parser(fmt, args);
        fmt++;
    }
    return count;
}
