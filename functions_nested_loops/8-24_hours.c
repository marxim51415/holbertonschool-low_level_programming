#include "main.h"

/**
 * jack_bauer - is a cool federal agent who doesn't play
 * by the rules and he has a deep voice
 *
 */

void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0 ; hour <= 23 ; hour++)
	{
		for (minute = 0 ; minute <= 59 ; minute++)
		{
		_putchar((hour / 10) + '0');
		_putchar((hour % 10) + '0');
		_putchar(':');
		_putchar((minute / 10) + '0');
		_putchar((minute % 10) + '0');
		_putchar('\n');
		}
	}
}
