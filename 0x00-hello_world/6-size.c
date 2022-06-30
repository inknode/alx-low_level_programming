#include <stdio.h>
/**
 * main - Prints sized of characters
 * description: Size of c data types
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of char: %c byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %f byte(s)", sizeof(float));
	return (0);
}
