#include <stdio.h>

/**
 * main - series of soviet experiments on how char and putchar work
 * my first use of decremental loop
 * Return: always 0
 */

int main(void)
{
	char rettel = 'z';

	while (rettel >= 'a')
	{
		putchar(rettel);
		rettel--;
	}
	putchar('\n');
	return (0);
}
