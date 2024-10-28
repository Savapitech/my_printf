/*
** EPITECH PROJECT, 2024
** baby_put_inf
** File description:
** put infinity
*/

#include "my.h"

#include <math.h>

void baby_put_inf(char spec)
{
    if (isupper(spec))
        baby_putstr("INF");
    if (!isupper(spec))
        baby_putstr("inf");
}
