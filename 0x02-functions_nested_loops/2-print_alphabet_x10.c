#include "holberton.h"

void print_alphabet_x10(void)
{
    int i;
    for ( i = 0; i < 10; i++)
    {
        char alpha;
        for ( alpha = 'a'; alpha < 'z'; alpha++)
        {
            _putchar(alpha);
        }
       _putchar('\n');
    }  

}
