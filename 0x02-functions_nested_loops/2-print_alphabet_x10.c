#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabets
 * Return: always 0
 */
void print_alphabet_x10(void)
{
	int count;
	char a;

	for (count = 1; count <= 10; count++)
	{
		for (a = 97; a <= 122; a++)
			_putchar(a);
		_putchar('\n');
	}
}
