#include "main.h"

/**
 * puts2 - prints every other char
 * @str: type
 *
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		_putchar('\n');
		i=+2;
	}
}
