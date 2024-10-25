/*
** EPITECH PROJECT, 2024
** intlen
** File description:
** count the decimal of an int given as parameter
*/

int baby_intlen(int nb)
{
    int i = 0;

    nb = (float)nb;
    for (; nb > 1; i++)
        nb /= 10;
    return i;
}
