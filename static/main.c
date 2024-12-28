#include <stdio.h>
#include <stdlib.h>

int increment(void);

int main(void)
{
    int value;
    value = increment();
    value = increment();
    value = increment();

    printf("Value of value after 3 call of increment operation is: %d\n", value);

    return 0;
}