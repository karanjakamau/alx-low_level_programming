#include "holberton.h"
/**
 * print_alphabet - prints the alphabet in lower case
 * in lowercase characters
 * Return: the function returns void
 */
void print_alphabet(void)
{
char alpha;

alpha = 'a';
while (alpha <= 'z')
{
_putchar(alpha);
++alpha;
}
_putchar('\n');
}
