#include "holberton.h"

int main (void)
{
char name[9] = {'H','o','l','b','e','r','t','o','n'};    
int c;
for ( c = 0; c < 9; c++)
{
    _putchar(name[c]);
}
_putchar('\n');
return (0);
}
