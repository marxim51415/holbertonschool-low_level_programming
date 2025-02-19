#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print alphabet in lower and uppercase! should be a breeze :)*
 * including more lines as a test*
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

	char upLetter = 'A';

	while (upLetter <= 'Z')
	{
		putchar(upLetter);
		upLetter++;
	}

	putchar('\n');
	return (0);
}
