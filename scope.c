/*
STATIC SCOPE or lexical scopingi definition of variable is resolved by searching its containing block or function.
If that fails, then searching the outer containing block and goes on.

int a = 10, b = 20;
int func()
{
    int a = 5;
    {
        int c;
        c = b/a;
        printf("%d", c);
    }
}
*/

/*
Code ==> Data Segment ==> BSS ==> Heap ==> Stack
*/

/*
DYNAMIC SCOPE definition of a variable is resolved by searching its containing block and if not found, then searching
its calling function if still not found then the function which called that calling function will be searched and so on.
*/

/*
int fun1(int);
int fun2(int);

int a = 5;
int main(void)
{
    int a = 10;
    a = fun1(a);
    printf("%d", a);
}
int fun1(int b)
{
    b = b+10;
    b = fun2(b);
    return b;
}


int fun2(int b)
{
    int c;
    c = a+b;
    return c;
}
*/

/*
Most of the programming languages use STATIC scoping like C, but PERL is using both dynamic and static scoping
*/


#include <stdio.h>

int a,b;

void print()
{
    printf("%d %d", a,b);
}

int fun1()
{
    int a, c;
    a = 0; b=1; c=2;
    return c;
}

void fun2()
{
    int b;
    a=3; b=4;
    print();
}

int main(void)
{
    a = fun1();
    fun2();

    return 0;
}
