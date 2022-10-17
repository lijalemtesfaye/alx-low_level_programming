#include <stdio.h>
/**
 * main - create 2 pairs of number
 * Return: 0
 */
int main(void)
{
	int l, m;

	for (l = 0; l <= 99; l++)
	{
		for (m = l; m <= 99; m++)
		{
			if (m != l)
			{
				putchar(l / 10 + 48);
				putchar(l % 10 + 48);
				putchar(' ');
				putchar(m / 10 + 48);
				putchar(m % 10 + 48);

				if (l * 100 + m != 9899)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
