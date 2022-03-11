#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p = 48, q = 48, y = 48, x = 48;
	
	for (; p < 58; p++)
	{
		for (; q < 58; q++)
		{
			for (; y < 58; y++)
			{
				for (; x < 58; x++)
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
					if (!(p == 57 && q == 56 && y == 57 && x == 57) &&
						!(p * 10 + q >= y * 10 + x))
					{
						putchar(',');
						putchar(' ');
					}
				}
				x = 48;
			}
			y = 48;
			x = q;
		}
		q = 48;
		y = p;
		x = q + 1;
	}
	putchar('\n');
	return (0);
}
