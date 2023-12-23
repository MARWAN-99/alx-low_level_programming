#include "main.h"

/**
 * print_sign - function that prints the sing of a number
 * @n: is a character to print sing
 * Return: 1 if n is positive, -1 if n is negative or zero for anything else
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
