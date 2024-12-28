#include <stdio.h>

int main(void)
{
    int a[5][5] = {{1,2,3,4,5}, {6,7,8,9,10}, {11,12,13,14,15},{16,17,18,19,20}, {10,10,10,10,10}};

    int i,j;
    int sum = 0;

    printf("The row total:\n");
    for(i = 0; i<5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            sum += a[i][j];
        }

        printf("%d\n", sum);
        sum = 0;
    }

    printf("Columns total:\n");
    for(j = 0; j < 5; j++)
    {
        for(i = 0; i<5; i++)
        {
            sum += a[i][j]; 
        }
        printf("%d\n", sum);
        sum = 0;
    }

    return 0;
}
