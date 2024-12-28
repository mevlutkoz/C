#include <stdio.h>
#define N 10

int main(void)
{
    int array[N], i;

    for(i = 0; i<N; i++)
    {
        printf("Please enter the elements of array: \n");
        scanf("%d", &array[i]);
    }

    printf("The elements of array is as follows:\n");
    for(i = 0; i<N; i++)
        printf("%d. element: %d\n", i, array[i]);

    return 0;
}

/*
Initialization of arrays:

int arr[5] = {1,2,3,4,5};

inr arr[] = {1,2,3,4,5,6};

int arr[5];
arr[0] = 1;
arr[1] = 2;
arr[2] = 3;
arr[3] = 4;
arr[4] = 5;

int arr[10] = {0}; The array will be filled with 0s

DESIGNATED INITIALIZER:

int arr[10] = {[0] = 1, [5] = 2, [6] = 3}; The rest will be filled with 0s
int arr[10] = {[0] = 1, [6] = 2, [5] = 3}; The rest will be filled with 0s, and the order is not important
int arr[] = {1,2,3, [9] = 12}; The array length will be determined with the largers designated initializer;


*/







