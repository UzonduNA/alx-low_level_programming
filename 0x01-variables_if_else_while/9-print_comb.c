#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers.
 *
 *Return: Always 0 if successful.
*/

int main(void)
{
int num;
	for (num = 0; 0 < 10; num++)

	{
		putchar((num % 10) + '0');

		if (num < 10)
		
		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
