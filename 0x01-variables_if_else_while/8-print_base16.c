#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int i;
    for (i = '0'; i < 'F'; i++)
    {
        putchar(i);
    }
    putchar('\n');
    return(0);
}