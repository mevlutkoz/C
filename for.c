#include <stdio.h>

int main(void)
{
    int i, n = 2;

    for (i = 0; i<=20; i+=2)
    {
        if(i == 2)
        {
            n = n+2;
            continue;
        }

        printf("The value of i: %d\n",i);
    }

    return 0;
}