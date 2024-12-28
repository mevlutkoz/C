#include <stdio.h>

#define greater(x,y) if(x>y)\
                        printf("%d is greater than %d",x,y);\
                        else \
                        printf("%d is greater than %d\n",y,x);

int main(void)
{
    int x =5, y=4;
    greater(x,y);

    return 0;
}