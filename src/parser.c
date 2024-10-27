/*
** EPITECH PROJECT, 2024
** printf
** File description:
** parser
*/

#include <stdbool.h>
#include <stddef.h>
#include <stdio.h>

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

static
bool handle_flags(flags_t *flags)
{
    flags->fmt++;
    if (*flags->fmt == '\0')
        return true;
    for (size_t i = 0; i < ARRAY_SIZE(HANDLERS); i++) {
        if (*(flags->fmt) == HANDLERS[i].flag) {
            flags->spec = *(flags->fmt);
            flags->count += HANDLERS[i].ptr(flags);
        }
    }
    return 0;
}

int parser(char *fmt, va_list args)
{
    int count = 0;
    flags_t flags = { .fmt = fmt, 0 };

    va_copy(flags.args, args);
    for (; *(flags.fmt) != '\0'; flags.fmt++) {
        if (*(flags.fmt) == '%') {
            write(STDOUT_FILENO, fmt, sizeof(char) * count);
            flags.count += count;
            handle_flags(&flags);
            count = 0;
            fmt = flags.fmt;
        } else
            count++;
    }
    if (count != 0) {
        write(STDOUT_FILENO, fmt, sizeof(char) * count);
        flags.count += count;
    }
    return flags.count;
}
