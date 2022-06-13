#include "main.h"

/**
 *_strlen - count the length of a string
 *@s: string
 *
 *Return: the value of the length i
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
