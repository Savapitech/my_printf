/*
** EPITECH PROJECT, 2024
** printf
** File description:
** printf.h
*/

#ifndef PRINTF_H_
    #define PRINTF_H_
    #include <unistd.h>
    #include <stdarg.h>
    #include <stdlib.h>
    #include <stddef.h>
    #define EXIT_ERROR -84
int my_printf(char *, ...);
int parser(char *fmt, va_list args);
int printf_putchar(va_list args);
int printf_putstr(va_list args);
int printf_putpercentage(va_list args);
int printf_put_nbr(va_list args);
int printf_put_unsigned_nbr(va_list args);
int printf_put_hex(va_list args);
int printf_put_oct(va_list args);

typedef struct {
    char flag;
    int (*ptr)(va_list args);
} handler_t;
#endif /* PRINTF_H_ */
