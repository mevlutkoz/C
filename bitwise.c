#include <stdio.h>

int main(void)
{
char x = 1, y = 2;

if(x&y)
    printf("The result of x & y is: %d\n", x&y);
else
    printf("The result of x && y is: %d\n", x&&y);

return 0;

}