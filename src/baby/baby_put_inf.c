/*
** EPITECH PROJECT, 2024
** baby_put_inf
** File description:
** put infinity
*/

#include "my.h"

#include <math.h>

void baby_put_inf(flags_t *flags)
{
    if (isupper(flags->spec))
        flags->spec_buff.str = "INF";
    else
        flags->spec_buff.str = "inf";
    flags->spec_buff.count = 3;
}
