#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints the alphabet minus two letters
 * simplest way i found to do this is to gate
 * putchar behind an if conditional that checks for
 * the letters we want to skip
 * don't increment letter in the if or else…
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
