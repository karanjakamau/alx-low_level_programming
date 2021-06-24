#include "holberton.h"
#include <stdio.h>
#define BOTH "FizzBuzz"
#define THREE "Fizz"
#define FIVE "Buzz"
/**
 * fizz_buzz - print 1 -100
 * replace a multiple of 3 with fizz
 * replace a multiple of 5 with buzz
 * replace a multiple of both 3 & 5 with FizzBuzz
 * Return: void
 */

void fizz_buzz(void)
{
int i;

for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("%s ", "FizzBuzz");
}
else if (i % 3 == 0)
{
printf("%s ", "Fizz");
}
else if (i % 5 == 0)
{
printf("%s ", "Buzz");
}
else
{
printf("%d ", i);
}
}
printf("\n");
}
