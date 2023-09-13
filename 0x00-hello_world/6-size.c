#include <stdio.h>


/**
 * main - entry point
 *
 * Return: prints 0 if successful
*/

int main()
{
	printf("Size of char: %lu byte(s)\n", sizeof(char));
	printf("Size of int: %lu byte(s)\n", sizeof(int));
	printf("Size of long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %lu bytes\n", sizeof(long long int));
	printf("Size of float: %lu bytes\n", sizeof(float));
    
    return 0;
}

