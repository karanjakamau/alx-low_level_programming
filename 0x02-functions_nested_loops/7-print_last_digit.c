#include "holberton.h"

int print_last_digit(int n)
{
    int x;
    if (n >= 0)
    {
     x = n % 10;
     _putchar(n + '0');
     return (x);   
    }
    else
    {
        n *= -1;
        x = n % 10;
        _putchar(n + '0');
        return (x);
    }
    
}