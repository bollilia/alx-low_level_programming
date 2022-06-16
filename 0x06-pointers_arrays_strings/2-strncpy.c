#include "main.h"
/**
 * *_strncpy - copy string.
 *
 * @dest: dest string
 * @src: src string
 * @n: bytes from src
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{

int j = 0;

for (j = 0; src[j] != '\0'; j++)
{
if (j < n)
{
dest[j] = src[j];
}
}
for (; j < n; j++)
{
dest[j] = '\0';
}
return (dest);
}
