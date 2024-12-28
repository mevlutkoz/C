/*
A recursive function is said to be TAIL recursive if the recursive call is the last thing done by the function.
There is no need to keep record of the previous state

A recursive function is said to be NON-TAIL recursive if the recursive call is not the last thing done by the function.
After returning back, there is something left to evaluate.
*/

#include <stdio.h>

int fun(int n)
{
    if(n == 1)
    {
        return 0;
    }

    else
        return 1 + fun(n/2);
}


int main(void)
{
    printf("%d\n", fun(8));

    return 0;
}