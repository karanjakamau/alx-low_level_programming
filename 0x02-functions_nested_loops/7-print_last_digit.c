#include "holberton.h"
/**
 * print_last_digit - prints the last digit
 * @n: integer
 * Return: the function returns 0
 */
int print_last_digit(int n)
{
int x;
if (n >= 0)
{
x = n % 10;
_putchar(x + '0');
return (x);
}
else
{
n *= -1;
x = n % 10;
_putchar(x + '0');
return (x);
}
}
