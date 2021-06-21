#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabet
 * in reverse.
 * Return: the function returns 0
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
