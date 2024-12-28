#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter the number :");
    scanf("%d", &number);

    int i, rem, sum = 0;
    for(i = 1 ; i<number; i++)
    {
        rem = number % i;
        if(rem == 0)
        {
            sum = sum + i;
        }
    }

    if(sum == number)
        printf("%d s PERFECT number ",number);
    else
        printf("%d is NOT PERFECT number ",number);

    return 0;
} 