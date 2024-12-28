#include <stdio.h>
#include <stdlib.h>

/*
We cannot acces this functions because it is decleared as static in file.c
If we want to acces this function we should remove the static keyword in file.c
*/
int fun(int, int);

int main(void)
{
    int sum = fun(3,5);
    printf("Result of the summation is: %d\n", sum);

    return 0;
}
