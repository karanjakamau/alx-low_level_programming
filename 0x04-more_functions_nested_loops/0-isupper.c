#include "holberton.h"
/**
 * _isupper - Checks for uppercase characters
 * @c: the character to check
 *
 * Return: 1 if true, 0 is false.
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
