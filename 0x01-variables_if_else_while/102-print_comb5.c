#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p = 48, q = 48, y = 48, x = 48;

	while (p < 58)
	{
		while (q < 58)
		{
			while (y < 58)
			{
				while (x < 58)
				{
					if (p * 10 + q >= y * 10 + x)
					{
					}
					else
					{
						putchar(p);
						putchar(q);
						putchar(' ');
						putchar(y);
						putchar(x);
					}
					if (!(p == 57 && q == 56 && y == 57 && x == 57) && !(p * 10 + q >= y * 10 + x))
					{
						putchar(',');
						putchar(' ');
					}
					x++;
				}
				y++;
				x = 48;
			}
			q++;
			y = 48;
			x = q;
		}
		p++;
		q = 48;
		y = p;
		x = q + 1;
	}
	putchar('\n');
	return (0);
}
