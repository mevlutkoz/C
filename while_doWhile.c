#include <stdio.h>

int main(void)
{
    int n;
    int m;
    printf("Please enter a number:\n");
    scanf("%d", &n);

    while(n != 0)
    {
        printf("Enter an integer:\n");
        scanf("%d", &n);
    }

    do
    {
        printf("PLease enter a integer for do while loop:\n");
        scanf("%d", &m);
    } while (m != 0);

    return 0;
    
}
