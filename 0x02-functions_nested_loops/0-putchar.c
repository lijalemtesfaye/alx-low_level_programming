#include "main.h"
/**
 * main - prints _putchar, fllowd by a new linees
 * Return: Alwys 0 (Success)
 */
int main(void)
{
	char abc[] = "_putchar";

	int a;

	for (a = 0; a < 8; a++)
	{
		_putchar(abc[a]);
	}
	_putchar('\n');
	return (0);
}
