#include <stdio.h>

/**
 * main - dronka bronk
 *
 * Return: always 0
 */

int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
			num++;
		}
	}
	putchar('\n');
	return (0);
}
