#include <stdio.h>

int main(void)
{
    int n;
    printf("Please enter the length of the array:\n");
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Elements in reverse order:\n");
    for(int i = n -1 ; i >= 0; i--)
        printf("%d\n", a[i]);

    return 0;
}

/*
Variable length arrays cannot have static storage duration, because it is dynamic and changes according to user
Variable length arrays do not have initializer, because it is not initialized at the time of compilation


*/