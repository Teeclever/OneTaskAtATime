#include <stdio.h>

/**
 * main - An entry point to a function that print lowercase alphabet
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
