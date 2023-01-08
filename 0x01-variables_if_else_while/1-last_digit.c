#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Store different value each time
 * Return: always 0
 */

int main(void)
{
	int n;
	int l;
	
	l = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
		printf("Last digit of %d is %d and is greater than 5", n, l);
	if (n == 0)
		printf("Last digit of %d is %d and is 0", n, l);
	else if (n < 6 && n != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0", n, l);
	printf("\n");
	return (0);
}
