#include <stdio.h>

/**
* main - Print all single digit numbers using only putchar
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int sdigit;

	for (sdigit = 0; sdigit < 10; sdigit++)
	putchar(sdigit + '0');

	putchar('\n');

	return (0);
}
