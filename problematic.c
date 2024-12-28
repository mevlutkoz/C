#include <stdio.h>

int func1(void)
{
    printf("Neso");
    return 1;
}

int func2(void)
{
    printf("Academy");
    return 1;
}

int main(void)
{
    int a = func1() + func2();

    printf("%d\n", a);

    return 0; 
}