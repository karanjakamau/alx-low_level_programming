#include "holberton.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 * using putchar function
 * Return: the function returns void
 */
void print_alphabet_x10(void)
{
int i;
for (i = 0; i < 10; i++)
{
char alpha;
for (alpha = 'a'; alpha <= 'z'; alpha++)
{
_putchar(alpha);
}
_putchar('\n');
}

}
