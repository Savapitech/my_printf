/*
** EPITECH PROJECT, 2024
** point_exa
** File description:
** display the adress in hexa
*/

#include "printf.h"

int printf_putstr(va_list args)
{
    int count = 0;
    char *str = va_arg(args, char *);

    for (; str[count]; count++)
        write(STDOUT_FILENO, &str[count], sizeof(char));
    return (count);
}
