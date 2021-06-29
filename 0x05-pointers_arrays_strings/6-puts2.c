#include "holberton.h"
#include <string.h>
/**
 * puts2 - Prints characters
 * @str: string pointer
 * Return: void
 */

void puts2(char *str)
{
int i;

int len = strlen(str);
for (i = 0; i < len; i++)
{
if (i % 2 == 0)
{
_putchar(*(str + i));
}
else
{
continue;
}
}
_putchar('\n');
}
