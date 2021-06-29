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

for (i = (len / 2); i < len; i++)
{

if ((len - 1) % 2 == 0)

{
_putchar(*(str + i));
}
else if ((len - 1) % 2 != 0)
{
_putchar(*(str + i));
}
}
_putchar('\n');
}
