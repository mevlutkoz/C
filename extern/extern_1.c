#include <stdio.h>
extern int a;

int main(void)
{
    printf("Value of a are retrieved from different source file: %d\n",a);

    return 0;
}

/*
To compile this two source file include all sources files that needs to be compiled or used:
gcc extern_1.c extern_2.c -o extern_1

*/