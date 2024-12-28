#include <stdio.h>

int main(void)
{
    int var, num;

    num = (var = 15, var+=35);

    printf("If there is parantheses rightmost is the value, num is: %d\n", num);

    return 0;
}