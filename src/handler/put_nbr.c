/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** display the number given as parameter
*/

#include "my.h"

void printf_put_nbr(flags_t *flags)
{
    baby_put_nbr(va_arg(flags->args, int), flags, 0);
}
