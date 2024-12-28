#include <stdio.h>

void minMax(int array[], int len, int *min, int *max)
{
    *min = *max = array[0];

    for(int i = 1; i < len; i++)
    {
        if(array[i] > *max)
            *max = array[i];
        if(array[i] < *min)
            *min = array[i];
    }
}

int main(void)
{
    int a[] = {1,2,3,4,5,6,7,8,9,0,55,44,22,33,11312,12313,312,31,555,666,77};
    int min, max;

    int len = sizeof(a) / sizeof(a[0]);
    
    /*
    We return output via pointers in the function call &min and &max
    */
    minMax(a, len, &min, &max);
    printf("Minimum value is: %d\nMaximum value is: %d\n", min, max);

    return 0;
}