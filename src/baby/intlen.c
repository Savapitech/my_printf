/*
** EPITECH PROJECT, 2024
** intlen
** File description:
** count the decimal of an int given as parameter
*/

int baby_intlen(int nb)
{
    nb = (float)nb;

    for (int i = 0; nb > 1; i++)
        nb / 10;
    return i;
}
