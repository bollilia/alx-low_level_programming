#include "main.h"
/**
 *_isupper - function that checks for uppercase character
 *@c: The character to compere
 *Return: 1 if c is uppercase
 *On error: 0 is returned
 */
int _isupper(int c)
{
int a = 0;

if (c >= 65 && c <= 90)
a = 1;
return (a);
}
