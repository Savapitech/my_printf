/*
** EPITECH PROJECT, 2024
** tests
** File description:
** criterion tests
*/
#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

const int a = 42;

void redirect_all_stdout(void)
{
        cr_redirect_stdout();
        cr_redirect_stderr();
}

Test(convert, is_hex_good, .init=redirect_all_stdout)
{
    my_printf("%x", 42);
    cr_assert_stdout_eq_str("2A");
}

Test(convert, is_oct_good, .init=redirect_all_stdout)
{
    my_printf("%o", 42);
    cr_assert_stdout_eq_str("52");
}

Test(number, is_float_good, .init=redirect_all_stdout)
{
    my_printf("%d", 42);
    cr_assert_stdout_eq_str("42");
}

Test(pointer, is_pointer_ok, .init=redirect_all_stdout)
{
    my_printf("%p", &a);
    cr_assert_stdout_eq_str((char *)&a);
}

Test(number, is_unsigned_ok, .init=redirect_all_stdout)
{
    my_printf("%u", 100000000);
    cr_assert_stdout_eq_str("100000000");
}

Test(display, is_char_ok, .init=redirect_all_stdout)
{
    my_printf("%c", 'M');
    cr_assert_stdout_eq_str("M");
}

Test(display, is_purcentage, .init=redirect_all_stdout){
    my_printf("%%");
    cr_assert_stdout_eq_str("%");
}

Test(display, is_str_ok, .init=redirect_all_stdout)
{
    my_printf("%s", "Hello Wolrd!");
    cr_assert_stdout_eq_str("Hello World!");
}
