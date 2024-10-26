/*
** EPITECH PROJECT, 2024
** printf
** File description:
** printf.h
*/

#ifndef MY_H_
    #define MY_H_
    #include <unistd.h>
    #include <stdarg.h>
    #include <stdint.h>
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
int baby_put_hex(uintptr_t nb);
int printf_put_pointer(va_list args);
int baby_strlen(char *str);
char *baby_revstr(char *str);
int baby_putchar(char c);
int baby_putstr(char *c);
size_t baby_intlen(size_t nb, int base);
int printf_put_float(va_list args);

typedef struct {
    char flag;
    int (*ptr)(va_list args);
} handler_t;
typedef struct {
    char *fmt;
    char flag;
    va_list args;
    char *built_string;
    int width;
    int precision;
    int length;
    char specifier;
} printf_str_t;
#endif /* MY_H_ */
