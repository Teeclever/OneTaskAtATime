#include <stdio.h>
/**
 * main - A function that print alphabet in capital letter and lower case
 * use Ascii character reprensentation
 * Return: 0
 */
 
int main()
{
	char i;
	int j;

	for (j = 'a'; j <= 'z'; j++)
		putchar(j);

	for (i = 65; i<= 90; i++)
		putchar(i);


	putchar('\n');



	return (0);




}
