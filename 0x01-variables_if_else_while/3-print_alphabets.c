#include <stdio.h>
#include <stdlib.h>

int main(void)
{
char alpha, u_alpha;

alpha = 'a';
u_alpha = 'A';
while (alpha <= 'z')
{
putchar(alpha);
alpha = alpha + 1;
}
while (u_alpha <= 'Z')
{
putchar(u_alpha);
u_alpha = u_alpha + 1;
}
putchar('\n');
return (0);
}
