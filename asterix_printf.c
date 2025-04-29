#include <stdio.h>

int main(void)
{
    unsigned int width, precision;
    int number = 256;
    double weight = 242.5;

    printf("Enter a filed width: \n");
    scanf("%u", &width);

    printf("The number is %*d\n", width, number);

    printf("Now enter a width and precision: \n");
    scanf("%u-%u", &width, &precision);

    printf("Wight= %*.*f\n", width, precision, weight);

    printf("Done");

    return 0;
}