#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints whether the last digit of a random number
 * is under or above five, or zero
 * euclidian division by 10 achieves this
 * also la_dig stands for last_digit
 * Return: Always (success)
 */

int main(void)
{
	int najwa;
	int la_dig;

	srand(time(0));
	najwa = rand() - RAND_MAX / 2;
	la_dig = najwa % 10;

	printf("Last digit of %d is ", najwa);

	if (la_dig > 5)
		printf("%d and is greater than 5\n", la_dig);

	else if (la_dig == 0)
		printf("%d and is 0\n", la_dig);

	else
		printf("%d and is less than 6 and not 0\n", la_dig);

	return (0);
}
