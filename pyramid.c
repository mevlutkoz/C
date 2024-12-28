#include <stdio.h>

int main(void)
{
    int row, col;
    printf("Please enter the hight of the pyramid: ");
    scanf("%d", &row);

    col = 2*row-1;

    int i,j;

    for(i = 1; i<=row; i++)
    {
        for(j = 1; j<=col; j++)
        {
            if(j>=row-(i-1) && j<=row+(i-1))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;


}