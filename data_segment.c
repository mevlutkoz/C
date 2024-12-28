#include <stdio.h>

/*
BSS Segment: Contains statically allocated variables that are uninitialized or zero-initialized (like static int i;).
Data Segment: Contains statically allocated variables that are explicitly initialized (like static int i = 45;).
*/

/*
When searching for a value for a variable first DATA SEGMENT is searched then BSS segment
*/

static int i;       /*Stored in BSS*/
static int i = 45;  /* Stored in data segment*/
static int i;       /* Stored in BSS*/
                    /* First looking place is data segment*/
int main(void)
{
    printf("When searching for a value first to look place is Data segment, so the value for i: %d\n", i);
    return 0;
}