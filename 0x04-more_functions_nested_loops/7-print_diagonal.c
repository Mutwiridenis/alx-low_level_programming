#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line on the treminal
 *
 * @n: number
 *
 * Return: diagonal line on the terminal
*/

void print_diagonal(int n)
{
	int filas;
	int columnas;
	
	if (n > 0)
	{
		for (filas = 0; filas < n; filas++)
		{
			for (columnas = 0; columnas <= filas; columnas++)
			{
				if (filas == columnas)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
				{
					_putchat(' ');
				}
			}
		}
	}
	else
	{
		_putchar('\n');
	}
}
