#include <stdio.h>

/**
 * main - who knows
 *
 * Return: always 0 success
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		num++;
	}
	putchar('\n');
	return (0);
}
