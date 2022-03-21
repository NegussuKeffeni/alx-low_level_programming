#include "main.h"

/**
 * puts2 - prints every other char
 * @str: type
 *
 */

void puts2(char *str)
{
	int j = sizeof(str)/sizeof(char);
	int i = 0;

	while ( i <= j)
	{
		_putchar(str[i]);
		_putchar('\n');
		i+=2;
	}
}
