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
for (i = 0; i <= 9; i++)
{
putchar(i+'0');
}
putchar('\n');
return (0);
}
