/*
** EPITECH PROJECT, 2024
** baby_put_nan
** File description:
** nan
*/
#include "my.h"

void baby_put_nan(flags_t *flags)
{
    if (isupper(flags->spec))
        flags->spec_buff.str = "NAN";
    else
        flags->spec_buff.str = "nan";
    flags->spec_buff.count = 3;
}
