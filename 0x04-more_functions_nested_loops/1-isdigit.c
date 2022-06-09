#include "main.h"
/**
 *_isdigit - function to check for digit
 *@c: integer
 *Return: a
 */
int _isdigit(int c)
{
	char abc = '0';
	int ret = 0;

	while (abc <= '9')
	{
		if (c == abc)
		{
			ret = 1;
		}
		abc++;
	}

	return (ret);
}
