#include <stdio.h>
int main(void)
{
    int a[] = {12,3123,3,123,5,646,47,46,43,23,23,24,5,6,7,8,9,3,3,3,3,3,3,2,22,1,2,45};
    printf("The size of the array is: %lu\n", sizeof(a)/sizeof(a[0]));

    return 0;
}