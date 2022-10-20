#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Print numbers between 0 to 9 incl.
 *
 * Return: Void.
 */
void print_numbers(void)
{
	int l;

	for (l = 0; l < 10; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
