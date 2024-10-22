/*
** EPITECH PROJECT, 2023
** CPoolDay07
** File description:
** ./my_strlen.c
*/



int my_strlen(char const *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return (i);
}
