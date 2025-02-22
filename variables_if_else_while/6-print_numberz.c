#include <stdio.h>

/**
 * main - slightly tricky one, required to
 * print all single digits with a while loop
 * declaring them as integers and using + '0'
 * to convert them to a string before using putchar
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
