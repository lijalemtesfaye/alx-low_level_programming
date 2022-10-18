#include "main.h"

/**
 * main - prints _putchar, fllowd by a new lines.
 *
 * Return: return 0
 */
int main(void)
{
	char abc[8] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(abc[c]);
	}
	_putchar(8);
	return (0);
}
