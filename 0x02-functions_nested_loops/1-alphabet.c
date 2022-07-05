#include "main.h"

/**
 * Main - Entry point
 * Description: Prints alphabet in lowerCase
 * Return: void
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
}
