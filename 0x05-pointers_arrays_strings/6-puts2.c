#include "main.h"

/**
 * puts2 - prints every other char
 * @str: type
 *
 */

void puts2(char *str)
{
char str[] = str;
int j = 0;
int i = 0;

while (str[i] != '\0')
{
j += 1;
if (str[j] != '\0')
{
	_putchar(str[i]);
}
i += 2;
}
_putchar('\n');
}
