#include "main.h"

/**
 * times_table - prints 9 table
 *
 */

void times_table(void)
{
	int nine;

	for (nine = 0 ; nine <= 9 ; nine++)
	{
		_putchar((nine * 9) + '0');
		_putchar('\n');
	}
}
