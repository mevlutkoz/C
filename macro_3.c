#include <stdio.h>

#define add(x,y) x+y

int main(void)
{
    int x = 5, y = 6;

    printf("Rule is first expansion then evaluation. "
            "The result of 5 * add(x,y) is: %d\n", 5*add(x,y));

    return 0;
}