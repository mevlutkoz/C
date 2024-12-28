#include <stdio.h>

/*
A function is called direct recursive if it calls the same function again
A function - lets say fun1- is called indirect recursive if it calls another function -let say fun2- and then fun2 
    calls fun directly or indirectly
*/

void odd();
void even();

int n = 1;

void odd()
{
    if(n <= 10)
    {
        printf("%d\n", n+1);
        n++;
        even();
    }
    return;
}

void even()
{
    if(n <= 10)
    {
        printf("%d\n", n-1);
        n++;
        odd();
    }

    return;
}

int main(void)
{
    odd();
    return 0;
}