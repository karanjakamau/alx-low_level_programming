#include "holberton.h"
/**
 * _islower - checks for lowercase characters
 * @c: an integer
 * Return: the function returns 1 when it is a lowercase character
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
