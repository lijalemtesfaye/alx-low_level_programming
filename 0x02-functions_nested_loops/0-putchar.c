#include "main.h"

/**
 * main - prints _putchar, fllowd by a new lines.
 *
 * Return: Always 0 (Success).
 */

int main(void)
{
	char abc[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(abc[c]);
	}
	_putchar('\n');
	return (0);
}
