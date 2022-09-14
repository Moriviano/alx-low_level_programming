#include "main.h"
/**
 * jack_bauer - func that prints every minuts of them day of jack bauer, starti
 * n from 00:00 to 23:59, min loop counts mins, while hour loop counts hours
 * and resets mins
 * Return : 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_remainder;
