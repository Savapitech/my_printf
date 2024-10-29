#include "my.h"
#include <string.h>
#include <stdio.h>

int main(void)
{
    int a = 42;

    my_printf("%5.3s pad 3: %5.3s %d\n", "hello", "hello", 42);
    printf("%5.3s pad 3: %5.3s %d\n", "hello", "helloo", 42);
}
