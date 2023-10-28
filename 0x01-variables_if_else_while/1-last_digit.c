#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - An entry point to a function if a random number is positive or negative
 *
 * Return: 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int last;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n%10;
	printf("Last digit of %d is %d ", n, last);

	if (last > 5)
		printf("and is greater than 5");
	else if (last < 6 && last != 0)
		printf("and is less than 6 and not 0");
	else{
		printf("and is 0");
	}
	putchar('\n');
	
	return (0);
}
