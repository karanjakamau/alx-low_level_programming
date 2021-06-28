#include "holberton.h"
#include <string.h>
/**
 * _puts - prints string characters
 * @str: pointer to string
 * Return: void
 */

void _puts(char *str)
{
int n, i;

n = strlen(str);
for (i = 0; i < n; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
