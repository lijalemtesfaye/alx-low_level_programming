#include "holberton.h"

/**
 * main - Print "_putchar"
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i = 0;
	char lij[] = "_putchar";

	while (i < 8)
	{
		_putchar(lij[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
