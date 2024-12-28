#include <stdio.h>

int main(void)
{
    int decimal = 0, binary, base = 1, rem, num;
    
    printf("Please enter the binary number: ");
    scanf("%d", &binary);  // Read the binary input as an integer (e.g., 1011 for binary 11)

    num = binary;  // Store the original binary number for output

    while (binary != 0)
    {
        rem = binary % 10;          // Get the last digit (bit) of the binary number
        decimal = decimal + rem * base;  // Add the bit's decimal value to the result
        binary = binary / 10;       // Remove the last digit (bit)
        base = base * 2;            // Update the base to the next power of 2
    }

    printf("Decimal equivalent of binary number %d is %d\n", num, decimal);

    return 0;
}
