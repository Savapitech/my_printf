/*
** EPITECH PROJECT, 2024
** printf
** File description:
** string builder
*/

#include "my.h"

int width_printer(flags_t *flags, int printed_count)
{
    int i = 0;

    for (; i < flags->width - printed_count; i++)
        write(STDOUT_FILENO, " ", sizeof(char));
    return i;
}
