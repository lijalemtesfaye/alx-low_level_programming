#include "main.h"
/**
 * main - prints _putchar, fllowd by a new linees
 * Return: Alwys 0 (Success)
 */
int main(void)
{
	char lij[] = "_putchar";

	int count;

	for (count = 0; count < 8; count++)
	{
		_putchar(lij[count]);
	}
	_putchar('\n');
	return (0);
}
