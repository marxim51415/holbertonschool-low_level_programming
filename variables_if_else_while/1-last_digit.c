#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints whether last digit of random number is between 0 and 6*
 * who's gonna use this? likely no one ever*
 * who wrote this?that's not english*
 * also la_dig stands for last_digit*
 * Return: Always (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int la_dig = n % 10;

		printf("Last digit of %d is ", n);

		if (la_dig > 5)
			printf("%d and is greater than 5\n", la_dig);

		else if (la_dig == 0)
			printf("%d and is zero\n", la_dig);

		else
			printf("%d and is less than 6 and not 0", la_dig);

	return (0);
}
