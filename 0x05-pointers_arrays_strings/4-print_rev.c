#include "holberton.h"
#include <string.h>
/**
 * print_rev - print a string in reverse
 * @s: pointer to char
 * Return: void
 */

void print_rev(char *s)
{
int i;

int len = strlen(s);
for (i = len; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}