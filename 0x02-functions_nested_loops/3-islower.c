#include "main.h"

/**
 * _islower - function that check for lowercase character
 * @c: is the one that will be use as the argument of the function
 * Return: 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
