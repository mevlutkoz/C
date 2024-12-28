#include <stdio.h>

/*
You cannot put floating point in switch part
And also you cannot use x y or z in case. But you can use MACROS
*/

int main(void)
{
    int x = 2;
    switch (x)
    {
    case 1: printf("X is one");
        break;
    case 2: printf("X is two");
        break;
    default:
        printf("X is not one or two but other number");
        break;
    }

    return 0;
}