#include <stdio.h>

int *findMid(int [], int);

int main(void)
{
    int a[] = {1,2,3,4,5};

    int n = sizeof(a)/sizeof(a[0]);

    int *mid = findMid(a,n);

    printf("The middle value is: %d\n", *mid);

    return 0;
}


int *findMid(int array[], int len)
{
    return &array[len/2];
}