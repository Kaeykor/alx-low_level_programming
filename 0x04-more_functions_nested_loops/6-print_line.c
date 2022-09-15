#include "main.h"

/**
 * print_line - entry point
 *
 * Description: Prints lines
 *@n: number of lines
 * Return: void
 */

void print_line(int n)
{
	int line_num;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (line_num = 1; line_num <= n; line_num++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
