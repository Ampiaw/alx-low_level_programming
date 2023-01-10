#include "main.h"
/**
 * print_last_digit - prints last digit
 * @i: integer
 * Return: last digit
 */
int print_last_digit(int i)
{
	int l;

	l = i % 10;
	if (l < 0)
		l *= -l;
	_putchar(l + '0');

	return (l);
}
