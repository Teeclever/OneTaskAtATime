#include <stdio.h>

/**
 * main - An entry point of print all possible combina tion of single digit
 *
 * Return: 0
 */

int main(void)
{

	int i;
	for (i = 48; i <=57; i++)
	{
		putchar(i + 0);
		if (i < 57)
		{
			putchar(',');
			putchar(' ');

		}
	}
	putchar('\n');

	return (0);
}

