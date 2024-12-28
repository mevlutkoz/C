#include <stdio.h>

int main()
{
    int var1, var2, var3;
    /*
    Önce 4 degeri var3'e atanır daha sonra var3, var2'ye atanır, var2 var1'e atanır
    */
    var1=var2=var3=4;
    printf("%d\n%d\n%d\n", var1, var2, var3);

    return 0;
}