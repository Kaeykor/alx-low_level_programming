#include "main.h"

/**
 * print_numbers - entry point
 *
 * Description: prints the number with _putchar
 *
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}