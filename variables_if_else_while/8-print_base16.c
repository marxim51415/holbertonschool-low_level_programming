#include <stdio.h>

/**
 * main - prints 0123456789abcdef
 * not following each other in the ASCII table
 * therefore declare two different variables and loop separately
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
