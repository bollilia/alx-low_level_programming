#include "main.h"
/**
 *print_alphabet - function that prints the alphabet, in lowercase,
 *followed by a new line.
 *Return: 0
 */

void print_alphabet(void)
{
	char m;

	m = 'a';
	while (m <= 'z')
	{
		_putchar(m);
		m++;
	}
	_putchar('\n');
}
