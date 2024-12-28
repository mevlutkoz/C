#include <stdio.h>

int global;

int main(void)
{
    int local;

    printf("If we do not initialize the global variable, it is set to: %d\n", global);
    printf("If we do not initialize the local variable it will get some garbage value: %d\n", local);

    return 0;
}