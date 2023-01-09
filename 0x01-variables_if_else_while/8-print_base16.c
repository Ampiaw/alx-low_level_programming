#include <stdio.h>
/**
 * main - prints hexadecimal numbers in lowercase
 * Return: always 0
 */
int main(void)
{
	int ba;
	char b;

	for (ba = '0'; ba <= '9'; ba++)
		putchar(ba);
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
