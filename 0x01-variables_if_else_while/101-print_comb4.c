#include <stdio.h>

/**
 *main - print all combinations of three different digits
 *Return: Always 0 (Success)
 */

int main(void)
{
	int unit;
	int ten;
	int hundred;

	for (hundred = '0'; hundred <= '9'; hundred++) /*hundreds place*/
	{
		for (ten = (hundred + 1); ten <= '9'; ten++) /*tens=100s+1*/
		{
			for (unit = (ten + 1); unit <= '9'; unit++) /*ones*/
			{
				putchar(hundred);
				putchar(ten);
				putchar(unit);
				if (hundred != '7' || ten != '8' || unit != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
