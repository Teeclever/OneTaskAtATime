#include <stdio.h>
/**
 * main - A progarm that print hexadecimal number in base 16
 *
 * Return: 0
 */

int main(void)
{
	int j;
	char i;

	for (i = 0; i <= 9; i++)
		putchar(i + '0');
	for (j = 'a'; j<= 'f'; j++)
		putchar(j);

	putchar('\n');



	return (0);


}
