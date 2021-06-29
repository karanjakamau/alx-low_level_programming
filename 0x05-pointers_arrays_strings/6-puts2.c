#include "holberton.h"
#include <string.h>
/**
 * puts - Prints characters 
 * @str: string pointer
 * Return: void
 */

void puts2(char *str)
{
int i;

int len = strlen(str);
for (i = 0; i < len; i++)
{
_putchar(*(str + i));
}
_putchar('\n'); 
}
