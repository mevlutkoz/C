#include <stdio.h>
#include <stdlib.h>

int increment(void);

extern int count;

int main(void)
{
    int value = 0;
    value = increment();
    value = increment();
    value = increment();

    count += 3;
    printf("The count variable in other file has static scope"
    "which cannot be externally get so count: %d\n", count);

    return 0;

}