#include <stdio.h>

int main(void)
{
    int a = 5, b=3;
    int incr;
    incr = (a<b) && (b++);

    printf("The logical value of incr is: %d\n", incr);
    printf("The b++ will not be evaluated so the value of b: %d\n", b);
    
    return 0;
}