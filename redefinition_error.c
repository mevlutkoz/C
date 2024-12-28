#include <stdio.h>


/*
int main(void)
{
    int var = 3;
    int var = 4;
    printf("%d\n", var);
    printf("%d\n", var);

    return 0;
}

*/

int main(void)
{
    int var = 3;
    {
        int var = 4;
        printf("Var in local scope: %d \n", var);
    }

    printf("Out of loca scope: %d\n", var);

    return 0;
}