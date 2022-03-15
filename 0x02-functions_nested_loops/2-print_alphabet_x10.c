#include "holberton.h"
/**
 * main - Entry point
 *
 *  Return: nothing
*/
int main (void)
{
	int i;
	char c;

	for (i = 0; i < 10; ++i)
        {
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}

	return (0);
}

