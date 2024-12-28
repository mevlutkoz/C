#include <stdio.h>

int var = 10;

void func();

int main(void)
{   
    int var = 5;
    printf("Variable var: %d\n", var);

    func();

    return 0;
}

void func(void)
{
    printf("This function will use global variable which is: %d\n", var);

}