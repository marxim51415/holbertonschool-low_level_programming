#include "main.h"

/**
* print_alphabet_x10 - prints alphabet 10 times
*
* Return: void
 */

void print_alphabet_x10(void)
{
	char letter;
	int i = 0;

	letter = 'a';

	for (i = 0 ; i <= 9 ; i++)
	{
		while (letter <= 'z')
		{
		_putchar(letter);
		letter++;
		}
	letter = 'a';
	_putchar('\n');
	}
}
