#include "holberton.h"

int _abs(int x)
{
    if (x < 0)
    {
        x *= -1;
        return (x);  
    }
    else if (x == 0)
    {
        return (0);
    }
    else
    {
        return (x);
    }
    
    
}