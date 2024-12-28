#include <stdio.h>

int fun1(int n)
{
    if(n == 1)
        return 1;
    else    
        return 1 + fun1(n-1);
}

int main(void)
{
    int n = 3;
    printf("%d", fun1(n));

    return 0;
}