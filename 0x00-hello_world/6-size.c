#include <stdio.h>
/**
 * main - prints sizes of various data types
 *
 * Return: Always 0
 */
int main(void)
{
	long long int a;

	printf("Size of a char: %ld byte(s)\n", (unsigned int long)sizeof(char));
	printf("Size of an int: %d byte(s)\n", (unsigned int)sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a float: %ld byte(s)\n", (unsigned long)sizeof(float));

	return (0);
}
