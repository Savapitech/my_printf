#include "my.h"
#include <string.h>
#include <stdio.h>

void main(void)
{
    int a = 42;

    my_printf("The word %s has %p characters. %%\n", "EPITECH", &a);
    //printf("%p", &a);
}
