#include <stdio.h>

/**
 * main - gronkey donk
 *
 * Return: always 0
 */

int main(void)
{
	int hexNum = '0';
	int hexLett = 'a';

	while (hexNum <= '9')
	{
		putchar(hexNum);
		hexNum++;
	}
	while (hexLett <= 'f')
	{
		putchar(hexLett);
		hexLett++;
	}
	putchar('\n');
	return (0);
}
