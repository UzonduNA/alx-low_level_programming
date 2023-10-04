#include <stdio.h>

/*
 * main - Entry point
 * putchar - output
 * Return: 0 is successful, 1 if there is an error
 */

int main(void)
	{
		char alphabet = 'a';
			while (alphabet <= 'z');

			{
				putchar (alphabet);
				alphabet++;
			}
			putchar('\n);
			return (0);
	}
