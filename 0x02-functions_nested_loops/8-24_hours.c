#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Print the time in a 24-hour clock format
 *
 * Description:
 * This function prints the time in a 24-hour clock format
 * ,running from 00:00 to 23:59.
 * It formats the hours and minutes with leading zeros if necessary.
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + 48);
			_putchar((hour % 10) + 48);
			_putchar(':');
			_putchar((minute / 10) + 48);
			_putchar((minute % 10) + 48);
			_putchar('\n');
		}
	}
}
