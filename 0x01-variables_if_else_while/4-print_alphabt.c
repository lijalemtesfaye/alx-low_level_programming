#include <stdio.h>

/**
* main - Print the alphabet in lowercase letters, except for e and q
*
* Return: Always 0 (Success)
*/
int main(void)
{
		char sletter;

		for (sletter = 'a'; sletter <= 'z'; sletter++)
		{
		if (sletter != 'e' && sletter != 'q')
		putchar(sletter);
		}
		putchar('\n');

	return (0);
}
