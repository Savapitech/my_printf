/*
** EPITECH PROJECT, 2024
** point_exa
** File description:
** display the adress in hexa with the flag p
*/
#include "../../lib/my/lib.h"
#include <stdio.h>



void display_pointer_hexa(void *nb)
{
    void *result = nb;

    while (nb != 0) {
        result = nb % 16;
        if (result < 10)
            my_putchar(result + 48);
        else
            my_putchar(result + 87);
        nb /= 16;
    }

}

int main(void)
{
    int a = 42;
    char b = 'b';
    char c[] = "Hello World!";

    display_pointer_hexa(&a);
    printf("\n%p\n", &a);
    display_pointer_hexa(&b);
    printf("\n%p\n", &b);
    display_pointer_hexa(&c);
    printf("\n%p\n", &c);
}
