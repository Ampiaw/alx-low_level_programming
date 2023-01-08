#include <stdio.h>
/**
 * main - prints alphabets using putchar
 * Return: Always 0
 */
int main(void)
{
	char a = 97;
	char z = 122;

	while (a <= z)
	{
		putchar(a);
		a++;
	}
	return (0);
}
