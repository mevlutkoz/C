#include <stdio.h>

int main(void)
{
    float var1 = 3.1415926783348;
    double var2 = 3.1415926783348;
    long double var3 = 3.1415926783348;

    printf("Size of float: %zu\nsize of double:%zu\nsize of long double:%zu\n", sizeof(float), sizeof(double), sizeof(long double));

    printf("Precision in float: %.2f\n", var1);
    printf("Precision in double: %.16f\n", var2);
    /*
    My system does not support Long double, so for the output of long double has some garbage numbers.
    */
    printf("Precision in long double: %.21Lf\n", var3);

    return 0;
}