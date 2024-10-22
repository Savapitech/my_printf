/*
** EPITECH PROJECT, 2023
** CPoolDay07
** File description:
** ./my_strncpy.c
*/



char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i < n && src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    if (src[i] == '\0' && i < n)
        dest[i] = '\0';
    return dest;
}
