/*
** EPITECH PROJECT, 2023
** CPoolDay07
** File description:
** ./my_putstr.c
*/

int my_putstr(char const *str)
{
    int count = 0;

    for (int i = 0;  str[i] != '\0'; i++) {
        my_putchar(str[i]);
        count++;
    }
    return (count);
}
