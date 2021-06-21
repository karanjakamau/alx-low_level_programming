#include <stdio.h>
#include <stdlib.h>

/**
 * main - print numbers
 * usin putchar.
 * Return: the function returns 0
 */
int main(void)
{
int i;
for (i = '0'; i < 10; i++)
{
putchar(i);
}
putchar('\n');
return (0);
}
