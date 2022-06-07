#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10 times
 * Description: prints the alphabet in small caps x10
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char m;
	int i = 1;

	while (i <= 10)
	{
		m = 'a';
		while (m <= 'z')
		{
			_putchar(m);
			m++;
		}
		_putchar('\n');
		i++;
	}
}
