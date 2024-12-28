#include <stdio.h>

int main(void)
{
    int base, exponent, expo, power = 1;
    double power1 = 1.0;

    printf("Enter the base: ");
    scanf("%d", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    expo = exponent;

    if(exponent > 0){
        while(exponent != 0)
        {
            power = power*base;
            exponent--;
        }

        
    }

    printf("%d to  the power of %d is %d", base, expo, power);
    return 0;
}