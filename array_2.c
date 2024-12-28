#include <stdio.h>

int main(void)
{
    int i;
    int a[9] = {1,2,3,4,5,6,7,8,9};
    printf("The normal order is:\n ");
    for(i = 0; i < 9; i++)
        printf("%d ->%d\n", i+1, a[i]);

    printf("The reverse order is:\n");
    for(i = 9; i>0; i--)
        printf("%d -> %d\n", i, a[i-1]);
    
    return 0;
}