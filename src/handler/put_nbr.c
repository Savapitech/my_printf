/*
** EPITECH PROJECT, 2024
** my_put_nbr
** File description:
** display the number given as parameter
*/

#include "my.h"

int printf_put_nbr(flags_t *flags)
{
    return baby_put_nbr(va_arg(flags->args, int));
}
