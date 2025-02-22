#include <stdio.h>

/**
 * main - project required printing digits
 * without using int -> going the char route
 * Return: always 0 (success)
 */

int main(void)
{
	char numb = '0';

	while (numb <= '9')
		{
		putchar(numb);
		numb++;
		}
	putchar('\n');
	return (0);
}
