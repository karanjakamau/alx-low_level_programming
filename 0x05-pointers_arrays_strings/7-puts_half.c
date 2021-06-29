#include "holberton.h"
#include <string.h>
/**
 * puts_half - print second half of the string
 * @str: string pointer
 * Return: void
 */

void puts_half(char *str)
{
int len = strlen(str);
int i;

if ((len % 2) == 0)
{
for (i = (len / 2); i < len; i++)
{
_putchar(*(str + i));
}
}
else
{
for (i = ((len - 1) / 2); i < len; i++)
{
_putchar(*(str + i));
}
}
_putchar('\n');
}
