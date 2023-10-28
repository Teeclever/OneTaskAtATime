#include <stdio.h>

/**
 * main - An entry point to a program that print alphabet in reserse
 *
 * Return: 0
 */
int main()
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);

	putchar('\n');

	return (0);


}

