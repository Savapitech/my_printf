/*
** EPITECH PROJECT, 2024
** printf
** File description:
** parser
*/

#include <limits.h>
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
    { 'b', &printf_put_bin },
    { 'B', &printf_put_bin },
    { '\0', NULL }
};

static
const char CHAR_SETTINGS[] = "-+ 0#";

static
void parse_char_settings(flags_t *flags)
{
    for (int i;;) {
        i = baby_stridx(CHAR_SETTINGS, *flags->fmt);
        if (i == -1)
            break;
        flags->flags |= 1 << i;
        flags->fmt++;
    }
}

static
bool handle_flags(flags_t *flags)
{
    flags->fmt++;
    if (*flags->fmt == '\0')
        return true;
    parse_char_settings(flags);
    flags->width = baby_strpnum(&flags->fmt);
    if (*flags->fmt == '.') {
        flags->fmt++;
        flags->precision = baby_strpnum(&flags->fmt);
    }
    if (flags->width == ERROR_OVERFLOW || flags->precision == ERROR_OVERFLOW)
        return false;
    TODO("add len modifier");
    for (size_t i = 0; i < ARRAY_SIZE(HANDLERS); i++) {
        if (*(flags->fmt) == HANDLERS[i].flag) {
            flags->spec = *(flags->fmt);
            flags->count += HANDLERS[i].ptr(flags);
        }
    }
    return true;
}

int parser(char *fmt, va_list args)
{
    int count = 0;
    flags_t flags = { .fmt = fmt, .precision = -1, 0 };

    va_copy(flags.args, args);
    for (; *(flags.fmt) != '\0'; flags.fmt++) {
        if (*(flags.fmt) != '%') {
            count++;
            continue;
        }
        flags.count += write(STDOUT_FILENO, fmt, sizeof(char) * count);
        if (!handle_flags(&flags))
            return (-1);
        count = 0;
        fmt = flags.fmt;
    }
    if (count != 0) {
        write(STDOUT_FILENO, fmt, sizeof(char) * count);
        flags.count += count;
    }
    return flags.count;
}
