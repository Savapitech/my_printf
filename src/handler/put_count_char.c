/*
** EPITECH PROJECT, 2024
** countchar
** File description:
** count characters
*/

#include "my.h"

int printf_count_char(flags_t *flags)
{
    int *count = va_arg(flags->args, int *);

    *count = flags->written;
    return *count;
}
