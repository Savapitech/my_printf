/*
** EPITECH PROJECT, 2024
** put_pointer
** File description:
** display the adress given as parameter
** in the hexadecimal format
*/

#include <stdint.h>

#include "my.h"

void printf_put_pointer(flags_t *flags)
{
    uintptr_t src = (uintptr_t)va_arg(flags->args, void *);
    char *old_spec_buff_str;

    old_spec_buff_str = flags->spec_buff.str;
    flags->spec_buff.str[0]= '0';
    flags->spec_buff.str[1]= 'x';
    baby_put_hex(src, flags, 3);
    flags->spec_buff.str = old_spec_buff_str;
}
