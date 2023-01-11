#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int m;
	int n;
	int p;

	for (m = 0; m <= 9; m++)
	{
		_putchar('0');
		for (n = 0; n <= 9; n++)
		{
			_putchar(',');
			_putchar(' ');
			p = m * n;
			if (p <= 9)
				_putchar(' ');
			else
				_putchar((p / 10) + '0');
			_putchar((p % 10) + '0');
		}
		_putchar('\n');
	}
}
