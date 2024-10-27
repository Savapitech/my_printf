/*
** EPITECH PROJECT, 2024
** printf
** File description:
** printf.h
*/

#ifndef MY_H_
    #define MY_H_
    #include <stdarg.h>
    #include <unistd.h>
    #include <ctype.h>
    #include <stddef.h>
    #include <stdint.h>
    #define EXIT_ERROR -84
    #define ERROR_OVERFLOW -2
    #define CHAR_TO_DIGIT(c) ((c) & 0xf)
    #define ARRAY_SIZE(array) ((sizeof array) / (sizeof array[0]))
    #define TODO(s) // renvoie rin

typedef struct {
    char *fmt;
    char spec;
    va_list args;
    char *built_string;
    int width;
    int precision;
    int length;
    char specifier;
    int count;
    char flags;
} flags_t;
typedef struct {
    char flag;
    int (*ptr)(flags_t *flags);
} handler_t;

char *baby_revstr(char *);
int baby_getnbr(char const *);
int baby_put_hex(uintptr_t truc);
int baby_putchar(char);
int baby_putstr(char *);
int baby_stridx(char const *, char);
int baby_strlen(char *);
size_t baby_intlen(size_t truc, int);
int baby_strpnum(char **);
int my_printf(char *, ...);
int parser(char *, va_list);
int printf_put_float(flags_t *);
int printf_put_hex(flags_t *);
int printf_put_nbr(flags_t *);
int printf_put_oct(flags_t *);
int printf_put_pointer(flags_t *);
int printf_put_unsigned_nbr(flags_t *);
int printf_putchar(flags_t *);
int printf_putpercentage(flags_t *);
int printf_putstr(flags_t *);
#endif /* MY_H_ */
