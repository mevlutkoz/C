#include <stdio.h>

int main(void)
{
   int var = 75;
   int var2 = 56;

   int num = (sizeof(var) && var2 > 23) ? ((var == 75) ? 'A' : 0) : 0;
   printf("The value of number is: %d\n", num);
   printf("The numeric value is %c\n", num);

   return 0;
}
