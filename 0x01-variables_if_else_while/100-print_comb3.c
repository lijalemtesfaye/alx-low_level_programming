#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 */
int main(void)
{
	int k;
	int d = 0;

	while (d < 10)
	{
		k = 0;
		while (k < 10)
		{
			if (d != k && d < k)
			{
				putchar('0' + d);
				putchar('0' + k);

				if (k + d != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}

			k++;
		}
		d++;
	}
	putchar('\n');
	return (0);
}
