#include "main.h"
/**
 * *_strncat - concatenates two strings.
 *
 * @dest: dest string
 * @src: src string
 * @n: bytes from src
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int j = 0;
int i = 0;

while (dest[i] != '\0')
{
i++;
}

for (j = 0; src[j] != '\0'; j++)
{
if (j < n)
{
dest[j + i] = src[j];
}
else

dest[j + i] = '\0';
}
return (dest);
}
