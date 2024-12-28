#include <stdio.h>
#include <limits.h>

int main(void)
{
    /*
    sizeof(short) < sizeof(int) < sizeof(long)
    */
    printf("Size of integer is %zu\n", sizeof(int));
    printf("Size of short integer is: %zu\n", sizeof(short int));
    printf("Size of long integer is :%zu\n", sizeof(long int));

    int var1 = INT_MIN;
    int var2 = INT_MAX;

    printf("Minimum value of int: %d\n", var1);
    printf("Maximum value of int: %d\n", var2);

    unsigned int var3 = 0;
    unsigned int var4 = UINT_MAX;
    printf("Range of unsigned integer is between: %u - %u\n",var3, var4);

    short int var5 = SHRT_MIN;
    short int var6 = SHRT_MAX;
    printf("Range of the short integer is between: %d-%d\n", var5, var6);

    unsigned short var7 = 0;
    unsigned short var8 = USHRT_MAX;
    printf("Range of the unsigned short int is between: %d-%d\n", var7, var8);

    return 0;
}
