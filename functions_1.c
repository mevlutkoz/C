#include <stdio.h>

/*These are called formal parameters ==> parameters */
int sum(int, int);

int main(void)
{
    int m=20, n=30, summation;
    /*these are called actual parameters ==> arguments */
    summation = sum(m,n);
    printf("The result is %d\n", summation);
    return 0;
}

int sum(int x, int y)
{
    return (x+y);
}