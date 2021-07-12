#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply 2 numbers
 * @argc: count
 * @argv: vector
 * Return: int
 */
int main(int argc, char *argv[])
{
if (argc == 3)
{
int num;

num = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", num);
}
else
printf("Error\n");
return (0);
}
