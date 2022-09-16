#include "main.h"

/**
 * print_diagonal - entry point
 *
 * Description: Prints diagonals
 *@n: number of spaces
 * Return: void
 */

void print_diagonal(int n)
{
	int row, a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 1; row <= n; row++)
		{
			if (row > 1)
			{
				for (a = 1; a <= row - 1; a++)
				{
				_putchar('_');
				}
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
