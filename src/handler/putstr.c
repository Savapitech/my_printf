/*
** EPITECH PROJECT, 2024
** point_exa
** File description:
** display the adress in hexa
*/

#include "my.h"

int printf_putstr(flags_t *flags)
{
    int count = 0;
    char *str = va_arg(flags->args, char *);

    for (int i = 0; str[i]; i++)
        count += write(STDOUT_FILENO, &str[i], sizeof(char));
    return (count);
}
