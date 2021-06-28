#include "holberton.h"
/**
 * swap_int - swaps values of pointers
 * @a: int pointer
 * @b: int pointer
 * Return: void
 */

void swap_int(int *a, int *b)
{
int i;
i = *a;
*a = *b;
*b = i;
}
