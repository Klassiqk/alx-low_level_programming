#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - A program that will assign a random number to the variable
 * Return: Always 0
 */
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5", n, m);
	else if (m == 0)
		printf("Last digit of %d is %d and is 0", n, m);
	else if (m < 6 && m != o)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, m);

	printf("\n");

	return (0);
}
