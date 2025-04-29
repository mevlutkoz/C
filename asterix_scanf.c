#include <stdio.h>  

int main(void)
{
    int n;
    printf("Please nter the three integer \n");

    scanf("%*d %*d %d", &n);
    printf("The last integer is %d\n", n);

    return 0;
}