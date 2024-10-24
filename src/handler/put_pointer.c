/*
** EPITECH PROJECT, 2024
** put_pointer
** File description:
** display the adress given as parameter
** in the hexadecimal format
*/
#include "printf.h"

int printf_put_pointer(va_list args)
{
    int src = va_arg(args, int);

    baby_put_hex(src);
    printf("printf p %x\n", src);
    return 0;
}
