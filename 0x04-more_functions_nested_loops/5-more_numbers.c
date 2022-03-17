#include "main.h"
/**
 *  more_numbers - function that prints the numbers from 0 to 14
 * followed by a newline
 *
 * REturn: Alwatys 0(Succes)
 */
void more_numbers(void)
{
	int i;
	int n;

	for (i =0; i <= 9; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar('1');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
