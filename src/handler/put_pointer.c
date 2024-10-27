/*
** EPITECH PROJECT, 2024
** put_pointer
** File description:
** display the adress given as parameter
** in the hexadecimal format
*/
#include <stdint.h>
#include "my.h"

int printf_put_pointer(flags_t *flags)
{
    uintptr_t src = (uintptr_t)va_arg(flags->args, void *);

    baby_putstr("0x");
    baby_put_hex(src);
    return 0;
}
