#include <stdio.h>

int factorial(int);

int main(void)
{
    int x,y;
    printf("Please enter the number:\n");
    scanf("%d", &x);

    y = factorial(x);

    printf("The result of factorial is: %d\n", y);


    return 0;
}

int factorial(int x)
{
    if(x ==1)
        return 1;
    else
        return x * factorial(x-1);
}