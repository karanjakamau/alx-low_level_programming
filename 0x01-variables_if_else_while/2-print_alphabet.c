#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet
 * from a-z.
 * Return: the function returns 0
 */
int main(void)
{
char alpha;

alpha = 'a';
while (alpha <= 'z')
{
putchar(alpha);
alpha = alpha + 1;
}
putchar('\n');
return (0);
}
