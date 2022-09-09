#include <stdio.h>

/**
 *main - print lowercase and uppercase a-zA-Z using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
	char lower = 'a';

	while (lower <= 'z') /*print lowercases a-z*/
	{
		putchar(lower);
		lower++;
	}

	putchar('\n');

	return (0);
}
