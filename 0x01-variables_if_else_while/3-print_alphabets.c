#include <stdio.h>
/**
 * main - prints upper and lower cases
 * Return: always 0
 */
int main(void)
{
	char z = 122;
	char Z = 90;
	char a;
	char A;

	for (a = 97; a <= z; a++)
		putchar(a);
	for (A = 65; A <= Z; A++)
		putchar(A);
	putchar('\n');
	return (0);
}
