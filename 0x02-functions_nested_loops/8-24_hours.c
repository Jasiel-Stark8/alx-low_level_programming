#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - prints every minute of the day
 * Description: prints every minute of the day
 * Return: void
 */
void jack_bauer(void)
{
  int hour, minute;
  for (hour = 0; hours < 25; hours++)
    {
      for (minute = 0; minute < 61; minute++)
	{
	  _putchar(hour / 10 + '0');
	  _putchar(hour % 10 + '0');
	  _putchar(':');
	  _putchar(minute / 10 + '0');
	  _putchar(minute % 10 + '0');
	}
    }
}
