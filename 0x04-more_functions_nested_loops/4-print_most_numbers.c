#include "holberton.h"
/**
 * print_most_numbers - print 0-9 except 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
int i = 0;
while (i <= 9)
{
if (i == 2 || i == 4)
{
i++;
continue;
}
else
{
_putchar(i + '0');
i++;
}
}
_putchar('\n');
}
