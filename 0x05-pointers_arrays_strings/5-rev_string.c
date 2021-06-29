#include "holberton.h"
#include <string.h>
/**
 * rev_string - reverses a string
 * @s: string pointer
 * Return: void
 */

void rev_string(char *s)
{
int i, j;
char *str;

int len = strlen(s);
for (i = (len - 1); i >= 0; i--)
{
    for (j = 0; j < len; j++)
    {
        str[j] = s[i]
    }
    
}

}