#include <stdio.h>

int func(int num)
{
    int count = 0;
    while(num)
    {
        count++;
        num>>=1;
    }

    return (count);
}

int main(void)
{
    int val = func(435);
    printf("The returned value of func calling is: %d\n", val);

    return 0;
}