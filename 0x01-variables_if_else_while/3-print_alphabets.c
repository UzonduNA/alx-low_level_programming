#include <stdio.h>

/**
 * main - entry point
 *
 * putchar - output
 * Return: returns 0 if successful else 1
 */

int main(void)

{

char alphabet = 'a' & 'A';

	while (alphabet <= 'z')
	{putchar(alphabet);
	alphabet++;
	}

	while (alphabet <= 'Z')

	{
	putchar(alphabet);
	alphabet++;
	}
putchar('\n');
return (0);


}
