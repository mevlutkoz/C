/*This count variable has static scope so cannot get externally code gives error due to linker*/
static int count;
/*
This is correct version, we remove static scope, code will work if we do this
int count;
*/
/*
Another way of doing this is

int increment(void)
{
    static int count;
    count = count + 1;
    return count;
}

*/

int increment(void)
{
    count = count +1;
    return count;
}