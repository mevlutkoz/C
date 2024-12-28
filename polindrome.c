#include <stdio.h>

int main(void)
{
    int n, result = 0, q, rem;
    printf("Enter the number: ");
    scanf("%d", &n);

    q = n;
    while(q != 0)
   {
    rem = q%10;
    result = result * 10 + rem;
    q = q/10;
   } 
   if(result == n)
    printf("The provided number is polindrome");
   else
    printf("It is not polindrome");

    return 0;

}