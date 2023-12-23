#include "main.h"

/**
 * _isalpha - Write a function that checks for alphabetic character
 * @c: check the character if is lowercase or uppercase
 * Return: 1 for lowercase or uppercase or 0 otherwise
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}

