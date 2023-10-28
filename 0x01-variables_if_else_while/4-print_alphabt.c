#include <stdio.h>

/**
 * main - A function that skip q and e from a alphabet letter
 *
 * Return: 0
 */


int main()
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'e' || i == 'q')
			continue;
		
		putchar(i);
	}
	putchar('\n');

	return (0);

}
