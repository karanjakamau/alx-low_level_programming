#include <stdio.h>
#include <stdlib.h>

/**
 * main - print alphabet
 * expect e and p.
 * Return: the function returns 0
 */
int main(void)
{
char alpha;

alpha = 'a';
while (alpha <= 'z')
{
if (alpha == 'q' || alpha == 'e')
{
alpha = alpha + 1;
}
else
{
putchar(alpha);
alpha = alpha + 1;
}
}
putchar('\n');
return (0);
}
