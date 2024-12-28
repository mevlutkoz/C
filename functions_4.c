#include <stdio.h>

int func(void)
{
    static int num = 16;
    return num--;
}

int main(void)
{
    for(func(); func(); func())
        printf("The value is: %d\n", func());

    return 0;
}