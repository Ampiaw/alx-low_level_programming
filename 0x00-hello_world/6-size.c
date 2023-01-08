#include <stdio.h>
/**
 * main - prints sizes of various data types
 *
 * Return: Always 0
 */
int main(void)
{
	printf("Size of a char: %ld byte(s)\n", (long unsigned int)sizeof(char));
	printf("Size of  int: %ld byte(s)\n", (long unsigned int)sizeof(int));
	printf("Size of a long int: %ld byte(s)\n",(long unsigned int)sizeof(long int));
	printf("Size of a long long int: %ld byte(s)\n", (long unsigned int)sizeof(long long));
	printf("Size of a float: %ld byte(s)\n", (long unsigned int)sizeof(float));

	return (0);
}
