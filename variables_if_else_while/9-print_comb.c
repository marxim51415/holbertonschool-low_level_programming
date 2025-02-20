#include <stdio.h>

/**
 * main - dronka bronk
 *
 * Return: always 0
 */

int main(void)
{
	int num = 0;

	while (num <= 8)
	{
		putchar(num + '0');
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar(num + '0');
	return (0);
}
