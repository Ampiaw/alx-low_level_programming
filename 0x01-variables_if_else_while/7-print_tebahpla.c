#include <stdio.h>
/**
 * main - prints lowercase alphabets in reverse
 * Return: always 0
 */
int main(void)
{
	char za;

	for (za = 'z'; za >= 'a'; za--)
		putchar(za);
	putchar('\n');
	return (0);
}
