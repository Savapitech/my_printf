/*
** EPITECH PROJECT, 2024
** put_pointer
** File description:
** display the adress given as parameter
** in the hexadecimal format
*/

#include "my.h"

int printf_put_pointer(va_list args)
{
    int src = va_arg(args, int);

    baby_put_hex(src);
    return 0;
}
