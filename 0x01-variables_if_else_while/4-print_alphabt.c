#include <stdio.h>
/**
 * main - prints alphabet except "e" and "q"
 * Return: always 0
 */
int main(void)
{
	int a;
	int z = 122;

	for (a = 97; a <= z; a++)
	{
		if (a != 'e' && a != 'q')
			putchar(a);
	}
	putchar('\n');
	return (0);
}
