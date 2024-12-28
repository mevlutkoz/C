#include <stdio.h>

int main(void)
{
    int N, rem;
    printf("Please enter the number:\n");
    scanf("%d", &N);

    int array[10] = {0};
    while(N>0)
    {
        rem = N % 10;
        if(array[rem] == 1)
            break;
        array[rem] = 1;
        N = N/10;
    }

    if(N > 0)
        printf("%s\n", "YES");
    else
        printf("%s\n", "NO");

    return 0;
}