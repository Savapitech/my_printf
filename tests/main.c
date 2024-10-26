#include "my.h"
#include <string.h>
#include <stdio.h>

void main(void)
{
    int a = 42;

    my_printf("%p\n", (&a));
    printf("%p\n", &a);
}
