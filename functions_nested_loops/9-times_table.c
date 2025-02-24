#include "main.h"

/**
 * times_table - prints 9 table
 *
 */

void times_table(void)
{
	int nine = 0;
	int times = 0;
	int product;

	for (nine = 0 ; nine <= 9 ; nine++)
	{
		for (times = 0 ; times <= 9 ; times++)
		{
			product = nine * times;

			if (product == 0)
			{
			_putchar('0' + product);
			}

			else if (product <= 9)
			{
			_putchar(',');
			_putchar(' ');
			_putchar('0' + product);
			}

			else
			{
			_putchar(',');
			_putchar(' ');
			_putchar('0' + (product / 10));
			_putchar('0' + (product % 10));
			}
		}

	_putchar('\n');
	times = 0;
	}
}
