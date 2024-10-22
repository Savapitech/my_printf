/*
** EPITECH PROJECT, 2023
** CPoolDay07
** File description:
** ./my_compute_power_rec.c
*/



#include <stdio.h>

int my_compute_power_rec(int nb, int p)
{
    int result = 1;

    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    result = my_compute_power_rec(nb, p - 1) * nb;
    return (result);
}
