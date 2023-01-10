#include "main.h"
/**
 * _islower - checks for lwercase character
 * @c: character
 * Return: 1 if lowercase but 0 if otherwise
 */
int _islower(int c)
{
	if (c <= 97 && c <= 122)
		return (1);
	else
		return (0);
}
