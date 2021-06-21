#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char alpha;
    alpha = 'a';
    while (alpha < 'z')
    {
        putchar(alpha);
        alpha = alpha + 1;
    }

    return (0);
    
}