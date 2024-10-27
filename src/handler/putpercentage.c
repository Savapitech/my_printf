/*
** EPITECH PROJECT, 2024
** point_exa
** File description:
** display the adress in hexa
*/

#include "my.h"

int printf_putpercentage(flags_t *flags)
{
    (void)flags;
    return (write(STDOUT_FILENO, "%", sizeof(char)));
}
