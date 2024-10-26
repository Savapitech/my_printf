/*
** EPITECH PROJECT, 2024
** point_exa
** File description:
** display the adress in hexa
*/

#include "my.h"

int printf_putpercentage(flags_t *flags)
{
    int c = '%';

    (void)flags;
    return (write(STDOUT_FILENO, &c, sizeof(char)));
}
