#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - shoutout to Olivia
 *
 * Return: always 0 (success)
 */

int main(void)
{

	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
		letter++;
	}

	putchar('\n');
	return (0);
}
