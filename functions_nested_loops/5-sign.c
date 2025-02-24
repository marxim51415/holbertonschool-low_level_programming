#include "main.h"

/**
 * print_sign - prints sign of int
 * @n: int to check
 * prints 0 if 0, + if positive, - if negative
 * Return: 0 if 0, 1 if positive, -1 if negative
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
