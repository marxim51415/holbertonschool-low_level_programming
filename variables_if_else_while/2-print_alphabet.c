#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print alphabet in two uses of putchar and a for loop. wish me luck*
 * Return: always 0 (success)
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
	putchar(letter);
	letter++;
	}

	putchar('\n');
	return (0);
}
