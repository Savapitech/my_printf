/*
** EPITECH PROJECT, 2024
** put_pointer
** File description:
** display the adress given as parameter
** in the hexadecimal format
*/
#include <stdint.h>
#include "my.h"

int printf_put_pointer(va_list args)
{
    baby_putstr("0x");
    void *src = va_arg(args, void *);

    baby_put_hex(src);
    return 0;
}
