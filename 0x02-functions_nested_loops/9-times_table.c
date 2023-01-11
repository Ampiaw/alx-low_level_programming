#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int n, m, p;

	while (n == 9)
	{
		for (m = 0; m <= 10; m++)
		{
			p = n * m;
			_putchar(p + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
