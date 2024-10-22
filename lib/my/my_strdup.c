/*
** EPITECH PROJECT, 2023
** CPoolDay08
** File description:
** ./my_strdup.c
*/

char *my_strdup(char const *src)
{
    char *dest;
    int len = my_strlen(src);

    dest = malloc(sizeof(char) * (len + 1));
    return my_strcpy(dest, src);
}
