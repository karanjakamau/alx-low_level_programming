#include "holberton.h"
/**
 * _abs - prints the absolute value
 * @x: integer
 * Return: the function returns 0
 */
int _abs(int x)
{
if (x < 0)
{
x *= -1;
return (x);
}
else if (x == 0)
{
return (0);
}
else
{
return (x);
}
}
